/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qchantel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 14:29:47 by qchantel          #+#    #+#             */
/*   Updated: 2017/11/23 14:40:25 by qchantel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_power(int a, int power)
{
	int		tmp;

	if (a == 0)
		return (0);
	if (power == 0)
		return (1);
	tmp = a;
	power += -1;
	while (power-- > 0)
		a *= tmp;
	return (a);
}
