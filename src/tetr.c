/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msidqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:21:19 by msidqi            #+#    #+#             */
/*   Updated: 2018/11/08 13:21:20 by msidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		tetr(int *tab)
{
	if (tab[0] == 4 && tab[1] == 4 && tab[2] == 4)
		return (2);
	if ((tab[3] % 4 == 2 || tab[3] % 4 == 1) && tab[0] == 1 && tab[1] == 2
	&& tab[2] == 1)
		return (6);
	if ((tab[3] % 4 == 2 || tab[3] % 4 == 1) && tab[0] == 3 && tab[1] == 1
	&& tab[2] == 1)
		return (8);
	if ((tab[3] % 4 == 3 || tab[3] % 4 == 2) && tab[0] == 2 && tab[1] == 1
	&& tab[2] == 1)
		return (15);
	if (tab[3] % 4 == 0 || tab[3] % 4 == 1)
	{
		if (tab[0] == 1 && tab[1] == 1 && tab[2] == 1)
			return (3);
		if (tetr_two(tab))
			return (tetr_two(tab));
	}
	if (tab[3] % 4 != 3 && tetr_one(tab))
		return (tetr_one(tab));
	if (tab[3] % 4 != 0 && tetr_three(tab))
		return (tetr_three(tab));
	else
		return (0);
}
