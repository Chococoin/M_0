/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 16:25:22 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/14 16:54:36 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void	ft_del(void *content)
// {
// 	free(content);
// }

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}

// int	main(void)
// {
// 	t_list	*lst = ft_lstnew(malloc(10));
// 	lst->next = ft_lstnew(malloc(20));
// 	lst->next->next = ft_lstnew(malloc(30));
// 	if (lst)
// 		printf("Empty List.\n");
// 	ft_lstclear(&lst, ft_del);
// 	if (!lst)
// 		printf("Empty List.\n");
// 	return (0);
// }
