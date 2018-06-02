/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qchantel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 15:59:08 by qchantel          #+#    #+#             */
/*   Updated: 2018/02/10 20:55:52 by qchantel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_end(int *table)
{
	int		len;

	len = 0;
	while (*table++ != 0)
		len++;
	return (len);
}

static int	*ft_words_length(char const *s, char c)
{
	int			*table;
	int			len;
	int			j;
	size_t		i;

	i = -1;
	if (!c || (table = (int*)malloc(sizeof(int) * (ft_strlen(s) + 1))) == NULL)
		return (NULL);
	j = 0;
	len = 1;
	while (s[++i] != '\0')
	{
		if (s[i] != c && s && s[i] != '\0')
		{
			while (s[++i] != '\0' && s[i] != c)
				len++;
			table[j] = len;
			j++;
			len = 1;
		}
		if (i == ft_strlen(s))
			break ;
	}
	table[j] = 0;
	return (table);
}

char		**ft_strsplit(char const *s, char c)
{
	char			**new;
	int				j;
	unsigned int	i;
	int				*t;

	i = -1;
	j = 0;
	if (!s || !c || !(t = ft_words_length(s, c)))
		return (NULL);
	if (((new = (char**)malloc(sizeof(char*) * (ft_end(t) + 1))) == NULL))
		return (NULL);
	while (((++i) < ft_strlen(s)) && s[i])
	{
		if (s[i] != c)
		{
			if ((new[j] = (char*)malloc(sizeof(char) * (t[j] + 1))) == NULL)
				return (NULL);
			new[j] = ft_strsub(s, i, t[j]);
			i = i + t[j];
			j++;
		}
	}
	free(t);
	new[j] = NULL;
	return (new);
}
