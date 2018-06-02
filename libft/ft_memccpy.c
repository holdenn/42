/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qchantel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 04:19:51 by qchantel          #+#    #+#             */
/*   Updated: 2017/11/21 04:36:40 by qchantel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*src_cpy;
	unsigned char	*dst_cpy;
	size_t			i;

	i = 0;
	src_cpy = (unsigned char *)src;
	dst_cpy = (unsigned char *)dst;
	while (i < n)
	{
		dst_cpy[i] = src_cpy[i];
		if (src_cpy[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
