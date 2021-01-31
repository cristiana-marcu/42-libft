/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 16:43:13 by cmarcu            #+#    #+#             */
/*   Updated: 2021/01/31 20:18:30 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*size_t	ft_strlen(const char *str)
{
	size_t result;

	result = 0;
	while (*str != '\0')
	{
		result++;
		str++;
	}
	return (result);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	a;

	if (!s)
		return (NULL);
	a = 0;
	if ((size_t)start >= ft_strlen(s))
		start = ft_strlen(s);
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
}*/

char	**ft_mountarray(char const *s, char c)
{
	size_t result;
	char *aux;
	char **array;

	result = 0;
	aux = (char*)s;
	while (*aux)
	{
		while (*aux == c)
			aux++;
		if (*aux != '\0')
			result++;
		while (*aux && *aux != c)
			aux++;
	}
	if(!(array = (char **)malloc((result + 1) * sizeof(char *))))
		return (NULL);
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if (!(array = ft_mountarray(s, c)))
		return (NULL);
	i = 0;
	j = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
		{
			while (s[j] && s[j] != c)
				j++;
			array[i] = ft_substr(s, 0, j);
			s = s + j;
			i++;
		}
		j = 0;
	}
	array[i] = NULL;
	return (array);
}

/*int main()
{
	const char *s = "     Hola     que tal estas   hoy     ";
	char c = ' ';
	int i = 0;
	int result = 5;
	char **array = ft_split(s, c);
	while (i < result)
	{
		printf("%s\n", array[i]);
		i++;
	}
}*/