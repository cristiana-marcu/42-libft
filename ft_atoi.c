/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:09:38 by cmarcu            #+#    #+#             */
/*   Updated: 2021/01/26 09:38:28 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int a;
	int number;
	int is_neg;

	a = 0;
	is_neg = 0;
	number = 0;
	if (!str)
		return (0);
	while (str[a] == '\t' || str[a] == '\n' || str[a] == '\v' ||
	str[a] == '\f' || str[a] == '\r' || str[a] == ' ')
		a++;
	if (str[a] == '-')
	{
		is_neg = 1;
		a++;
	}
	else if (str[a] == '+')
		a++;
	while (ft_isdigit(str[a]))
	{
		number = number * 10 + (str[a] - '0');
		a++;
	}
	return (is_neg == 0 ? number : -number);
}