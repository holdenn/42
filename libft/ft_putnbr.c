/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qchantel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 20:38:47 by qchantel          #+#    #+#             */
/*   Updated: 2017/11/29 12:31:18 by qchantel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr(int n)
{
	int		len;
	int		temp;
	int		power;

	temp = n;
	len = 0;
	power = 1;
	if (n < 0)
	{
		ft_putchar('-');
		temp = -temp;
	}
	if (n == -2147483648)
	{
		ft_putstr("2147483648");
		return ;
	}
	while ((n = (n / 10)) != 0)
		power = (power * 10);
	while (power != '\0')
	{
		ft_putchar(temp / power + '0');
		temp = temp % power;
		power = power / 10;
	}
}
