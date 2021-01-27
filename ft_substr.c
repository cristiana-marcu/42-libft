/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 12:39:34 by cmarcu            #+#    #+#             */
/*   Updated: 2021/01/22 16:45:36 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	a;

	a = 0;
	p = (char*)malloc(sizeof(*s) * (len + 1));
	if (!p)
		return (NULL);
	while (a < len)
	{
		p[a] = s[start + a];
		a++;
	}
	p[a] = '\0';
	return (p);
}
