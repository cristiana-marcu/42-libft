/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 12:04:15 by cmarcu            #+#    #+#             */
/*   Updated: 2021/01/25 13:15:53 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t
	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t a;

	a = 0;
	if (dstsize > 1)
	{
		while (src[a] != '\0')
		{
			if (a == dstsize)
			{
				a--;
				break ;
			}
			dst[a] = src[a];
			a++;
		}
	}
	dst[a] = '\0';
	a = 0;
	while (src[a] != '\0')
		a++;
	return (a);
}
