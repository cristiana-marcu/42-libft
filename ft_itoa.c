/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 09:46:43 by cmarcu            #+#    #+#             */
/*   Updated: 2021/01/27 13:43:22 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	tmp;
	int		length;
	int		a;

	length = ft_strlen(str);
	a = 0;
	while (a < length / 2)
	{
		tmp = str[a];
		str[a] = str[length - 1 - a];
		str[length - 1 - a] = tmp;
		a++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		is_neg;
	int		a;

	is_neg = 0;
	if (n < 0)
	{
		is_neg = 1;
		n = -n;
	}
	if (!(str = ft_calloc(11 + is_neg, sizeof(*str))))
		return (NULL);
	if (n == 0)
		str[0] = '0';
	a = 0;
	while (n != 0)
	{
		str[a] = (n % 10) + '0';
		n = n / 10;
		a++;
	}
	if (is_neg)
		str[a] = '-';
	return (ft_strrev(str));
}
