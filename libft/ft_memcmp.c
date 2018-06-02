/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qchantel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 05:06:06 by qchantel          #+#    #+#             */
/*   Updated: 2017/11/27 07:04:52 by qchantel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*st1;
	char	*st2;
	size_t	i;

	i = 0;
	if (s1 == s2 || n <= 0)
		return (0);
	st1 = (char *)s1;
	st2 = (char *)s2;
	while (i < n && (st1[i] == st2[i]))
	{
		i++;
		if (i == n)
			return (0);
	}
	return ((unsigned char)st1[i] - (unsigned char)st2[i]);
}
