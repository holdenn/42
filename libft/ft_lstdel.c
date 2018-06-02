/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qchantel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 16:30:09 by qchantel          #+#    #+#             */
/*   Updated: 2017/11/23 13:56:57 by qchantel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*next;
	t_list	**cpy;

	cpy = alst;
	if (!del)
		return ;
	while (*cpy)
	{
		cpy = alst;
		next = (*cpy)->next;
		ft_lstdelone(cpy, del);
		*alst = next;
	}
}
