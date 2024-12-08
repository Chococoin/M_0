/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 10:42:14 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/08 16:42:37 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static void	ft_cesar_13(unsigned int i, char *c)
// {
// 	(void)i; // Avoid warning for variable not used 
// 	if (*c >= 'a' && *c <= 'z')
// 	{
// 		*c = (((*c - 'a' + 13) % 26) + 'a');
// 	}
// 	else if (*c >= 'A' && *c <= 'Z')
// 	{
// 		*c = (((*c - 'A' + 13) % 26) + 'A');
// 	}
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// int	main()
// {
// 	char str[] = "Rnpu cebwrpg va gur 42 Pbzzba Pber pbagnvaf na rapbqrq uvag.";

// 	ft_striteri(str, ft_cesar_13);
// 	printf("Original: %s\n", str);
// 	return (0);
// }
