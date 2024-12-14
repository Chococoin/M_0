/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 18:48:25 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/14 20:44:54 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newnode;
	t_list	*current;

	if (!lst || !f || !del)
		return (NULL);
	newlist = NULL;
	current = lst;
	while (current)
	{
		newnode = ft_lstnew(f(current->content));
		if (!newnode)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newnode);
		current = current->next;
	}
	return (newlist);
}

// static void ft_del(void *content)
// {
// 	free(content);
// }

// static void *ft_clone(void *content)
// {
// 	char *original = (char *)content;
// 	char *clone = malloc(sizeof(char) * (strlen(original) + 1));
// 	if (!clone)
// 		return (NULL);
// 	strcpy(clone, original);
// 	return (clone);
// }

// static void	ft_print_list(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("%s -> ", (char *)lst->content);
// 		lst = lst->next;
// 	}
// 	printf("NULL\n");
// }

// int	main(void)
// {
// 	t_list *node1 = ft_lstnew(strdup("hello"));
// 	t_list *node2 = ft_lstnew(strdup("world"));
// 	t_list *node3 = ft_lstnew(strdup("42"));

// 	t_list *lst = node1;
// 	ft_lstadd_back(&lst, node2);
// 	ft_lstadd_back(&lst, node3);

// 	printf("Lista original:\n");
// 	ft_print_list(lst);

// 	t_list *new_lst = ft_lstmap(lst, &ft_clone, &ft_del);

// 	printf("\nLista nueva (clonada):\n");
// 	ft_print_list(new_lst);

// 	ft_lstclear(&lst, &ft_del);
// 	ft_lstclear(&new_lst, &ft_del);

// 	return (0);
// }
