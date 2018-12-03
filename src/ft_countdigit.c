/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msidqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:18:50 by msidqi            #+#    #+#             */
/*   Updated: 2018/11/08 13:19:01 by msidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_countdigit(char *tab, int size, char n)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (i < size)
	{
		if (tab[i] == n)
			count++;
		i++;
	}
	return (count);
}
