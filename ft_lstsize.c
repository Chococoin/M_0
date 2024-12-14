/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 12:13:13 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/14 12:52:02 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	lstsize;

	lstsize = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		lstsize++;
	}
	return (lstsize);
}

// int main(void)
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

// 	printf("%d\n", ft_lstsize(head));

// 	return (0);
// }
