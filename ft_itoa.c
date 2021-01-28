/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 09:46:43 by cmarcu            #+#    #+#             */
/*   Updated: 2021/01/28 12:22:36 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		itoa_length(int n)
{
	int length;

	length = 0;
	if (n < 0)
		length++;
	if (n == 0)
		length = 1;
	while (n != 0)
	{
		length++;
		n = n / 10;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		length;

	length = itoa_length(n);
	if (!(str = (char *)malloc(sizeof(*str) * (length + 1))))
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		if (n == -2147483648)
		{
			str[length - 1] = '8';
			n = n / 10;
			length--;
		}
		n = -n;
	}
	if (n == 0)
		str[0] = '0';
	while (length >= 0 && n != 0)
	{
		str[length-- - 1] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
