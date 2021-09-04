/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 23:47:15 by rnoriko           #+#    #+#             */
/*   Updated: 2021/05/27 15:35:04 by rnoriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	str_len;

	str_len = 0;
	while (*s++)
		str_len++;
	return (str_len);
}

char	*ft_strchr(const char *s, int c)
{
	char	*temp_s;

	temp_s = (char *)s;
	while (*temp_s)
	{
		if (*temp_s == (char)c)
			return (temp_s);
		temp_s++;
	}
	if ((char)c == '\0')
		return (temp_s);
	return (NULL);
}

char	*ft_strdup(const char *s1)
{
	char	*str_heap;
	char	*heap_temp;

	str_heap = (char *) malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (str_heap)
	{
		heap_temp = str_heap;
		while (*s1)
			*heap_temp++ = *s1++;
		*heap_temp = '\0';
	}
	return (str_heap);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	str = (char *) malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2) + 1)));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		str[j++] = s2[i++];
	str[j] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*substr;

	if (!s || len <= 0 || start >= ft_strlen(s))
		return (ft_strdup(""));
	else
	{
		if (ft_strlen(s + start) < len)
			len = ft_strlen(s + start);
		substr = malloc((len + 1) * sizeof(char));
		if (!substr)
			return (NULL);
		i = 0;
		while (s[i] && i < len)
			substr[i++] = s[start++];
		substr[i] = '\0';
		return (substr);
	}
}

static char	*ft_save_buffer(char *buffer, char *save_buffer)
{
	char	*control_leaks;

	if (save_buffer)
	{
		control_leaks = save_buffer;
		save_buffer = ft_strjoin(save_buffer, buffer);
		free(control_leaks);
	}
	else
		save_buffer = ft_strdup(buffer);
	return (save_buffer);
}

static char	*ft_get_line_and_reminder(char **line, char *save_buffer,
	int readed_bytes)
{
	char	*control_leaks;
	size_t	i;

	i = 0;
	while (save_buffer[i] != '\n' && save_buffer[i])
		i++;
	if (i < ft_strlen(save_buffer))
	{
		*line = ft_substr(save_buffer, 0, i);
		control_leaks = save_buffer;
		save_buffer = ft_substr(save_buffer, i + 1, ft_strlen(save_buffer));
		free(control_leaks);
	}
	else if (!readed_bytes)
	{
		*line = save_buffer;
		save_buffer = NULL;
	}
	return (save_buffer);
}

int	get_next_line(char **line)
{
	char			buffer[BUFFER_SIZE + 1];
	int				readed_bytes;
	static char		*save_buffer;

	if (!line || BUFFER_SIZE <= 0)
		return (-1);
	readed_bytes = read(0, buffer, BUFFER_SIZE);
	while (readed_bytes)
	{
		if (readed_bytes == -1)
			return (readed_bytes);
		buffer[readed_bytes] = '\0';
		save_buffer = ft_save_buffer(buffer, save_buffer);
		if (ft_strchr(buffer, '\n'))
			break ;
		readed_bytes = read(0, buffer, BUFFER_SIZE);
	}
	if (!readed_bytes && !save_buffer)
		*line = ft_strdup("");
	else
		save_buffer = ft_get_line_and_reminder(line, save_buffer, readed_bytes);
	if (!readed_bytes && !save_buffer)
		return (readed_bytes);
	return (1);
}
