/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pieces.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:12:33 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/11/08 16:19:13 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	pieces(int **t)
{
	int pieces;
	int *tab;

	pieces = 0;
	tab = *t;
	while (tab[pieces] != 0 && pieces < 26)
	{
		if (tab[pieces] == -1)
		{
			tab[52] = -1;
			break ;
		}
		pieces++;
	}
	if (tab[52] != -1)
	{
		tab[52] = pieces;
		tab[55] = ft_sqrt(pieces * 4);
	}
}
