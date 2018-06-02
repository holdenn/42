/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qchantel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 16:34:58 by qchantel          #+#    #+#             */
/*   Updated: 2017/11/23 14:29:37 by qchantel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*cpy;
	t_list	*st;

	cpy = f(lst);
	if (!f || !lst || !(new = ft_lstnew(cpy->content, cpy->content_size)))
		return (NULL);
	st = new;
	lst = lst->next;
	while (lst)
	{
		cpy = f(lst);
		if (!(new->next = ft_lstnew(cpy->content, cpy->content_size)))
			return (NULL);
		new = new->next;
		lst = lst->next;
	}
	return (st);
}
