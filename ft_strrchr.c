/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 13:27:47 by cmarcu            #+#    #+#             */
/*   Updated: 2021/01/25 13:30:33 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int a;

	if (!s)
		return (NULL);
	a = ft_strlen(s) - 1;
	while (a <= 0)
	{
		if (s[a] == (char)c)
			return ((char*)(s + a));
		a--;
	}
	return (NULL);
}
