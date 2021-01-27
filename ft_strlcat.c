/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 09:37:49 by cmarcu            #+#    #+#             */
/*   Updated: 2021/01/27 15:37:25 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t a;
	size_t dst_length;
	size_t src_length;
	size_t offset;

	dst_length = ft_strlen(dst);
	src_length = ft_strlen(src);
	a = 0;
	offset = dst_length;
	while (src[a] != '\0' && offset < dstsize - 1)
	{
		dst[offset] = src[a];
		offset++;
		a++;
	}
	dst[offset] = '\0';
	return (dst_length + src_length);
}
