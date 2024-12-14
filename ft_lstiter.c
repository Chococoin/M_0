/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 17:19:40 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/14 18:29:11 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		if (lst->content)
			f(lst->content);
		lst = lst->next;
	}
}

// static void	ft_capitalize(void *content)
// {
// 	int		i;
// 	char	*str;

// 	str = (char *)content;
// 	if (!str) {
// 		return ;
// 	}
// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		if (str[i] >= 'a' && str[i] <= 'z')
// 			str[i] = str[i] - 32;
// 		i++;
// 	}
// }

// static void	print_content(void *content)
// {
// 	printf("%s\n", (char *)content);
// }

// int	main(void)
// {
// 	t_list *node1 = ft_lstnew(strdup("nodo 1"));
// 	t_list *node2 = ft_lstnew(strdup("nodo 2"));
// 	t_list *node3 = ft_lstnew(strdup("nodo 3"));

// 	t_list *head = NULL;
// 	ft_lstadd_front(&head, node3);
// 	ft_lstadd_front(&head, node2);
// 	ft_lstadd_front(&head, node1);
// 	ft_lstiter(head, ft_capitalize);
// 	ft_lstiter(head, print_content);
// 	free(node1->content);
// 	free(node2->content);
// 	free(node3->content);
// 	free(node1);
// 	free(node2);
// 	free(node3);

// 	return (0);
// }
