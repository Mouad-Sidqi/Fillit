/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:06:12 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/11/08 13:09:56 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*find_square(int *tab)
{
	char *out;

	out = (char*)malloc(sizeof(char) * tab[55] * tab[55]);
	dot_grid(&out, tab[55] * tab[55]);
	while (1)
	{
		tab[53] = 0;
		tab[54] = 0;
		placing(&out, &tab);
		if (tab[54] == tab[52])
			break ;
		free(out);
		tab[55]++;
		out = (char*)malloc(sizeof(char) * tab[55] * tab[55]);
		dot_grid(&out, tab[55] * tab[55]);
	}
	return (out);
}
