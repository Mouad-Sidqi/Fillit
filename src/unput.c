/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unput.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:14:03 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/11/08 16:32:12 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	unput(int id, char **out, int i)
{
	char c;
	char *s;

	s = *out;
	c = '.';
	if (id == 1 || id == 2 || id == 3)
		shape_onetwothree(s, c, i, id);
	if (id == 4 || id == 5 || id == 6)
		shape_fourfivesix(s, c, i, id);
	if (id == 7 || id == 8 || id == 9)
		shape_seveneightnine(s, c, i, id);
	if (id == 10 || id == 11 || id == 12)
		shape_teneleventwelve(s, c, i, id);
	if (id == 13 || id == 14 || id == 15)
		shape_thirtfourtfift(s, c, i, id);
	if (id == 16 || id == 17 || id == 18)
		shape_sixtseventeignt(s, c, i, id);
	if (id == 19)
		shape_nineteen(s, c, i, id);
	return ;
}
