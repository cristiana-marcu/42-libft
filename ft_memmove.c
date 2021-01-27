/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 11:06:05 by cmarcu            #+#    #+#             */
/*   Updated: 2021/01/27 15:14:41 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dstchar;
	char	*srcchar;
	size_t	a;

	srcchar = (char *)src;
	dstchar = (char *)dst;
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	else
	{
		a = len - 1;
		while (a >= 0)
		{
			dstchar[a] = srcchar[a];
			a--;
		}
		return (dst);
	}
}
