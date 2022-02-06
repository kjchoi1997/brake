/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyuchoi <kyuchoi>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 15:20:01 by kyuchoi           #+#    #+#             */
/*   Updated: 2022/02/06 15:20:01 by kyuchoi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static int	alloc_new_t_list(t_list **new);
static void	ft_st_lstclear(t_list **lst, void (*del)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*result_iter;
	t_list	*new_item;

	if (lst == NULL || f == NULL || alloc_new_t_list(&result))
		return (NULL);
	result_iter = result;
	result_iter->content = f(lst->content);
	result_iter->next = lst->next;
	while (result_iter->next != NULL)
	{
		if (alloc_new_t_list(&new_item))
		{
			ft_st_lstclear(&result, del);
			return (NULL);
		}
		new_item->content = f(result_iter->next->content);
		new_item->next = result_iter->next->next;
		result_iter->next = new_item;
		result_iter = result_iter->next;
	}
	return (result);
}

static int	alloc_new_t_list(t_list **new)
{
	if (new == NULL)
		return (1);
	*new = (t_list *)malloc(sizeof (t_list));
	if (*new == NULL)
		return (1);
	return (0);
}

static void	ft_st_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (lst == NULL || *lst == NULL)
		return ;
	while (*lst != NULL)
	{
		next = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = next;
	}
	*lst = NULL;
}
