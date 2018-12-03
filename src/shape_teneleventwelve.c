/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shape_teneleventwelve.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msidqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:22:52 by msidqi            #+#    #+#             */
/*   Updated: 2018/11/08 13:22:52 by msidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	shape_teneleventwelve(char *s, char c, int i, int id)
{
	int size;

	size = ft_sqrt(ft_strlen(s));
	if (id == 10)
	{
		s[i] = c;
		s[i + 1] = c;
		s[i + 2] = c;
		s[i + size + 1] = c;
	}
	if (id == 11)
	{
		s[i] = c;
		s[i + size - 1] = c;
		s[i + size] = c;
		s[i + 2 * size] = c;
	}
	if (id == 12)
	{
		s[i] = c;
		s[i + 1] = c;
		s[i + size + 1] = c;
		s[i + 2 * size + 1] = c;
	}
	return ;
}
