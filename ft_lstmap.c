/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarcu <cmarcu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 12:00:22 by cmarcu            #+#    #+#             */
/*   Updated: 2021/02/05 12:11:49 by cmarcu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *copy;
	t_list *new;

	copy = NULL;
	while (lst)
	{
		if (!(new = ft_lstnew(f(lst->content))))
		{
			(*del)(new->content);
			new = copy->next;
		}
		ft_lstadd_back(&copy, new);
		lst = lst->next;
	}
	return (copy);
}
