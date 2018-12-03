/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shape_sixtseventeignt.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msidqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:22:43 by msidqi            #+#    #+#             */
/*   Updated: 2018/11/08 13:22:44 by msidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	shape_sixtseventeignt(char *s, char c, int i, int id)
{
	int size;

	size = ft_sqrt(ft_strlen(s));
	if (id == 16)
	{
		s[i] = c;
		s[i + 1] = c;
		s[i + size] = c;
		s[i + 2 * size] = c;
	}
	if (id == 17)
	{
		s[i] = c;
		s[i + 1] = c;
		s[i + 2] = c;
		s[i + size + 2] = c;
	}
	if (id == 18)
	{
		s[i] = c;
		s[i + size] = c;
		s[i + 2 * size - 1] = c;
		s[i + 2 * size] = c;
	}
	return ;
}
