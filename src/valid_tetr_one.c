/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_tetr_one.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msidqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:21:36 by msidqi            #+#    #+#             */
/*   Updated: 2018/11/08 13:21:38 by msidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		valid_tetr_one(char *tab, int i, int id, int size)
{
	if (id == 1 && i % size != size - 1 && i + size + 1 < size * size
		&& tab[i] == '.' && tab[i + 1] == '.' && tab[i + size] == '.'
		&& tab[i + size + 1] == '.')
		return (1);
	if (id == 2 && i + 3 * size < size * size
		&& tab[i] == '.' && tab[i + size] == '.'
		&& tab[i + 2 * size] == '.' && tab[i + 3 * size] == '.')
		return (1);
	if (id == 3 && i % size + 3 < size && i + 3 < size * size &&
		tab[i] == '.' && tab[i + 1] == '.'
		&& tab[i + 2] == '.' && tab[i + 3] == '.')
		return (1);
	if (id == 4 && i % size + 2 < size && i + size + 2 < size * size
		&& tab[i] == '.' && tab[i + 1] == '.'
		&& tab[i + size + 1] == '.' && tab[i + size + 2] == '.')
		return (1);
	if (id == 5 && i % size != 0 && i + 2 * size - 1 < size * size &&
		tab[i] == '.' && tab[i + size - 1] == '.' && tab[i + size] == '.' &&
		tab[i + 2 * size - 1] == '.')
		return (1);
	if (id == 6 && i % size != 0 && i % size != size - 1
		&& i + size < size * size && tab[i] == '.' && tab[i + 1] == '.'
		&& tab[i + size - 1] == '.' && tab[i + size] == '.')
		return (1);
	return (0);
}
