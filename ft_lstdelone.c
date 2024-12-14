/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 15:06:57 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/14 18:29:59 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// static void	ft_del(void *content)
// {
// 	free(content);
// }

// int	main(void)
// {
// 	t_list	*node = ft_lstnew(malloc(10));
// 	if (node)
// 		printf("There's a node.\n");
// 	ft_lstdelone(node, ft_del);
// 	if (!node)
// 		printf("Node is NULL.\n");
// 	return (0);
// }
