/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 10:23:14 by cmarcu            #+#    #+#             */
/*   Updated: 2021/01/25 10:33:03 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*srcchar;
	char	*dstchar;
	size_t	a;

	a = 0;
	srcchar = (char *)src;
	dstchar = (char *)src;
	while (a < n)
	{
		dstchar[a] = srcchar[a];
		a++;
	}
	return (dst);
}
