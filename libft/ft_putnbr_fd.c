/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qchantel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 20:37:39 by qchantel          #+#    #+#             */
/*   Updated: 2017/11/29 12:32:07 by qchantel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	int		len;
	int		temp;
	int		power;

	temp = n;
	len = 0;
	power = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		temp = -temp;
	}
	if (n == (-2147483648))
	{
		ft_putstr_fd("2147483648", fd);
		return ;
	}
	while ((n = (n / 10)) != 0)
		power = (power * 10);
	while (power != '\0')
	{
		ft_putchar_fd(temp / power + '0', fd);
		temp = temp % power;
		power = power / 10;
	}
}
