/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_tetr_three.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msidqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:21:49 by msidqi            #+#    #+#             */
/*   Updated: 2018/11/08 13:21:50 by msidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		valid_tetr_three(char *tab, int i, int id, int size)
{
	if (id == 14 && i % size != size - 1 && i + 2 * size + 1 < size * size
		&& tab[i] == '.' && tab[i + size] == '.' && tab[i + 2 * size] == '.'
		&& tab[i + 2 * size + 1] == '.')
		return (1);
	if (id == 15 && i % size - 2 >= 0 && i + size < size * size
		&& tab[i] == '.' && tab[i + size - 2] == '.' && tab[i + size - 1] == '.'
		&& tab[i + size] == '.')
		return (1);
	if (id == 16 && i % size != size - 1 && i + 2 * size < size * size
		&& tab[i] == '.' && tab[i + 1] == '.' && tab[i + size] == '.'
		&& tab[i + 2 * size] == '.')
		return (1);
	if (id == 17 && i % size + 2 < size && i + size + 2 < size * size
		&& tab[i] == '.' && tab[i + 1] == '.' && tab[i + 2] == '.'
		&& tab[i + size + 2] == '.')
		return (1);
	if (id == 18 && i % size != 0 && i + 2 * size < size * size
		&& tab[i] == '.' && tab[i + size] == '.' &&
		tab[i + 2 * size - 1] == '.' && tab[i + 2 * size] == '.')
		return (1);
	if (id == 19 && i % size + 2 < size && i + size + 2 < size * size
		&& tab[i] == '.' && tab[i + size] == '.' && tab[i + size + 1] == '.'
		&& tab[i + size + 2] == '.')
		return (1);
	return (0);
}
