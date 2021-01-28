/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 16:43:13 by cmarcu            #+#    #+#             */
/*   Updated: 2021/01/28 14:58:27 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countpieces(char const *s, char c)
{
	size_t result;
	size_t a;

	result = 1;
	a = 0;
	while (s[a] != '\0')
	{
		if (s[a] == c)
			result++;
		a++;
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	dimension;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	dimension = (ft_countpieces(s, c));
	if (!(array = (char **)malloc((dimension + 1) * sizeof(char*))))
		return (NULL);
	i = 0;
	while (i <= dimension)
	{
		j = 0;
		while (s[j] != c)
			j++;
		j++;
		*array = (char *)malloc(j * sizeof(char *));
		ft_memcpy(*array, s, (j - 1));
		*array[j - 1] = '\0';
		s = s + j;
		array++;
		i++;
	}
	return (array);
}
