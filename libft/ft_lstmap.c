/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshikhov <mshikhov@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 02:35:04 by mshikhov          #+#    #+#             */
/*   Updated: 2026/08/12 03:19:11 by mshikhov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*data;
	t_list	*start;
	t_list	*new;

	if (!lst || !f || !del)
		return (NULL);
	start = NULL;
	while (lst)
	{
		data = f(lst->content);
		new = ft_lstnew(data);
		if (new == NULL)
		{
			ft_lstclear(&start, del);
			del(data);
			return (NULL);
		}
		ft_lstadd_back(&start, new);
		lst = lst->next;
	}
	return (start);
}
