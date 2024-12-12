/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:44:14 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/12 15:21:52 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// int	main(void)
// {
// 	t_list	*node;
// 	char	*content1;

// 	content1 = "Hola mundo.";
// 	node = ft_lstnew(content1);
// 	if (!node)
// 		printf("The node wasn't created.");
// 	else
// 		printf("%s", (char *)node->content);
// 	free(node);
// 	return (0);
// }
