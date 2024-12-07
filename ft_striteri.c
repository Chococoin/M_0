/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glugo-mu <glugo-mu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 10:42:14 by glugo-mu          #+#    #+#             */
/*   Updated: 2024/12/07 13:43:47 by glugo-mu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

static char	*ft_cesar_13(char c)
{
	if (c >= 'a' && c <= 'z')
		return (((c - 'a' + 13) % 26) + 'a');
	if (c >= 'A' && c <= 'Z')
		return (((c - 'A' + 13) % 26) + 'A');
	return (c);
}

void	ft_striteri(char *s, void (*f)(unsigned int, char))
{	
	int i;
	if (!s || !f)
		return;
	
	i = 0;
	while (*s)
	{
		f(i, s);
		s++;
		i++;
	}	
}

int	main()
{
	char str[] = "Rnpu cebwrpg va gur 42 Pbzzba Pber pbagnvaf na rapbqrq uvag. "
				 "Sbe rnpu pvepyr, bayl bar cebwrpg cebivqrf gur pbeerpg uvag "
				 "arrqrq sbe gur arkg pvepyr. Guvf punyyratr vf vaqvivqhny, "
				 "jvgu n svany cevmr sbe bar fghqrag. Fgnss zrzoref znl "
				 "cnegvpvcngr ohg ner abg ryvtvoyr sbe n cevmr. Ner lbh nzbat "
				 "gur irel svefg gb fbyir n pvepyr? Fraq gur uvagf jvgu "
				 "rkcynangvbaf gb by@42.se gb or nqqrq gb gur yrnqreobneq. Gur "
				 "uvag sbe guvf svefg cebwrpg, juvpu znl pbagnva nantenzzrq "
				 "jbeqf, vf: Jbys bs ntragvir cnegvpyrf gung qvfcebir terral "
				 "gb lbhe ubzrf qan gung cebjfr lbhe fgbby";

	ft_striteri(str, ft_cesar_13);
	printf("Original: %s\n", str);
	return (0);
}