/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 12:53:40 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/14 13:06:01 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next != NULL)
		lst = lst-> next;
	return (lst);
}

// int	main(void)
// {
// 	t_list *head = NULL;

//     // Crear nodos
//     t_list *node1 = ft_lstnew("Nodo 1");
//     t_list *node2 = ft_lstnew("Nodo 2");
//     t_list *node3 = ft_lstnew("Nodo 3");
//     t_list *node4 = ft_lstnew("Nodo 4");
//     t_list *node5 = ft_lstnew("Nodo 5");

//     // Añadir nodos a la lista
//     ft_lstadd_front(&head, node1);
//     ft_lstadd_front(&head, node2);
//     ft_lstadd_front(&head, node3);
//     ft_lstadd_front(&head, node4);
//     ft_lstadd_front(&head, node5);

//     t_list *result = ft_lstlast(head);

// 	printf("%s\n", (char *)result->content);

// 	return (0);
// }
