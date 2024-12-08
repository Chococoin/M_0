/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 21:49:03 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/08 17:33:40 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char	ft_cesar_13(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'a' && c <= 'z')
// 		return (((c - 'a' + 13) % 26) + 'a');
// 	if (c >= 'A' && c <= 'Z')
// 		return (((c - 'A' + 13) % 26) + 'A');
// 	return (c);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*result;

	if (!s || !f)
		return (NULL);
	result = malloc(strlen(s) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[strlen(s)] = '\0';
	return (result);
}

// int	main()
// {
// 	char str[] = "Rnpu cebwrpg va gur 42 Pbzzba Pber pbagnvaf na rapbqrq uvag. "
// 				 "Sbe rnpu pvepyr, bayl bar cebwrpg cebivqrf gur pbeerpg uvag "
// 				 "arrqrq sbe gur arkg pvepyr. Guvf punyyratr vf vaqvivqhny, "
// 				 "jvgu n svany cevmr sbe bar fghqrag. Fgnss zrzoref znl "
// 				 "cnegvpvcngr ohg ner abg ryvtvoyr sbe n cevmr. Ner lbh nzbat "
// 				 "gur irel svefg gb fbyir n pvepyr? Fraq gur uvagf jvgu "
// 				 "rkcynangvbaf gb by@42.se gb or nqqrq gb gur yrnqreobneq. Gur "
// 				 "uvag sbe guvf svefg cebwrpg, juvpu znl pbagnva nantenzzrq "
// 				 "jbeqf, vf: Jbys bs ntragvir cnegvpyrf gung qvfcebir terral "
// 				 "gb lbhe ubzrf qan gung cebjfr lbhe fgbby";

// 	char	*result = ft_strmapi(str, ft_cesar_13);

// 	if (result)
// 	{
// 		printf("Original: %s\n", str);
// 		printf("Modified: %s\n", result);
// 		free(result);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed\n");
// 	}

// 	return 0;
// }