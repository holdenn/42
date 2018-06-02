/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qchantel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 22:58:30 by qchantel          #+#    #+#             */
/*   Updated: 2017/11/29 12:23:49 by qchantel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*sp;

	sp = malloc(sizeof(size_t) * size);
	if (sp == NULL)
		return (NULL);
	ft_memset(sp, 0, size);
	return (sp);
}
