/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:10:22 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/11/08 13:11:25 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	int		i;
	int		fd;
	char	*temp;
	int		*tab;

	i = 0;
	fd = open(argv[1], O_RDONLY);
	tab = queueing(get_tetr(fd));
	pieces(&tab);
	if (errors(fd, argc, tab[52]))
		return (0);
	temp = find_square(tab);
	while (i < tab[55] * tab[55])
	{
		if (i % tab[55] == 0 && i > 0)
			ft_putchar('\n');
		ft_putchar(temp[i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
