/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaaouni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 10:32:18 by mmaaouni          #+#    #+#             */
/*   Updated: 2018/10/31 20:03:10 by mmaaouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int odd;
	int result;

	odd = 1;
	result = 0;
	while (nb > 1)
	{
		nb = nb - odd;
		odd = odd + 2;
		result++;
	}
	if (nb == 0)
		return (result);
	return (result);
}
