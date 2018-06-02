/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qchantel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 04:37:02 by qchantel          #+#    #+#             */
/*   Updated: 2017/11/21 04:56:51 by qchantel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src2;
	char	*dst2;

	src2 = (char*)src;
	dst2 = (char*)dst;
	if (src2 < dst2)
	{
		src2 = (char *)src + len - 1;
		dst2 = (char *)dst + len - 1;
		while (len--)
			*dst2-- = *src2--;
		return (dst);
	}
	while (len--)
		*dst2++ = *src2++;
	return (dst);
}
