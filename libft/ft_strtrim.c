/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qchantel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 15:49:54 by qchantel          #+#    #+#             */
/*   Updated: 2017/11/29 12:27:27 by qchantel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	char	*new;
	int		len;
	int		i;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	while (len != 0 && (s[len - 1] == ' ' ||
				s[len - 1] == '\n' || s[len - 1] == '\t'))
		len--;
	i = -1;
	while (len != 0 && (s[++i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		len--;
	if ((new = (char*)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	s += i;
	i = -1;
	while (++i < len)
		new[i] = s[i];
	new[i] = '\0';
	return (new);
}
