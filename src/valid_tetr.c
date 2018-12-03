/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_tetr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msidqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:21:58 by msidqi            #+#    #+#             */
/*   Updated: 2018/11/08 13:21:59 by msidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		valid_tetr(char *tab, int i, int id, int size)
{
	if (id >= 1 && id <= 6)
		return (valid_tetr_one(tab, i, id, size));
	if (id >= 7 && id <= 13)
		return (valid_tetr_two(tab, i, id, size));
	if (id >= 14 && id <= 19)
		return (valid_tetr_three(tab, i, id, size));
	return (0);
}
