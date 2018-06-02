/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qchantel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 09:19:52 by qchantel          #+#    #+#             */
/*   Updated: 2018/02/12 23:04:51 by qchantel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_inc_line(char *s1, char *line)
{
	int		len;
	int		i;
	int		len2;

	i = -1;
	len = ft_strchr(s1, '\n') - s1;
	len2 = ft_strlen(s1);
	if (ft_strchr(s1, '\n') == NULL)
		len = len2;
	line = ft_strnew(len);
	while (++i < len)
		line[i] = s1[i];
	i = 0;
	while (i < (len2 - len))
	{
		s1[i] = s1[i + len + 1];
		i++;
	}
	while (i < len2)
		s1[i++] = '\0';
	return (line);
}

int		ft_strljoin(char **s1, char *s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = ft_strjoin(*s1, s2);
	free(s2);
	free(tmp);
	return (1);
}

int		ft_read_it(int fd, char **str, char **line)
{
	int		ret;
	char	*buf;

	ret = 0;
	if ((buf = ft_strnew(BUFF_SIZE + 1)) == 0)
		return (-1);
	if ((ret = read(fd, buf, BUFF_SIZE)) <= 0)
	{
		if (ft_strlen(str[fd]) > 0)
			return (1);
		free(buf);
		*line = NULL;
		return (ret);
	}
	buf[ret] = '\0';
	ft_strljoin(&str[fd], buf);
	return (ret);
}

int		get_next_line(int fd, char **line)
{
	static char *str[OPEN_MAX];
	int			ret;

	ret = 0;
	if (fd < 0 || !line || fd > OPEN_MAX)
		return (-1);
	if (!str[fd])
		str[fd] = (ft_strnew(BUFF_SIZE + 1));
	else if ((ft_strchr(str[fd], '\n')) != NULL)
	{
		*line = ft_inc_line(str[fd], *line);
		return (1);
	}
	if ((ret = ft_read_it(fd, str, line)) == 0)
		return (0);
	if (ret > 0 && ret < BUFF_SIZE)
	{
		*line = ft_inc_line(str[fd], *line);
		return (1);
	}
	if (ret == -1)
		return (-1);
	return (get_next_line(fd, line));
}
