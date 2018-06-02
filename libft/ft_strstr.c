/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qchantel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 15:56:55 by qchantel          #+#    #+#             */
/*   Updated: 2017/11/28 14:52:28 by qchantel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *hay, const char *needle)
{
	int		len;
	int		i;
	int		match;

	match = 0;
	i = 0;
	len = 0;
	if (*needle == '\0' || hay == needle)
		return ((char *)hay);
	while (needle[len] != '\0')
		len++;
	while (hay[i] != '\0')
	{
		while (hay[i] == needle[match])
		{
			match++;
			if (match == len)
				return ((char *)hay + i + 1 - len);
			i++;
		}
		i = i - match + 1;
		match = 0;
	}
	return (0);
}
