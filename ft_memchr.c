/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 11:39:24 by cmarcu            #+#    #+#             */
/*   Updated: 2021/01/25 11:45:37 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	a;

	a = 0;
	if (!s)
		return (NULL);
	str = (unsigned char *)s;
	while (str[a] != '\0')
	{
		if (str[a] == (unsigned char)c)
			return (void *)(str + a);
		a++;
	}
	return (NULL);
}
