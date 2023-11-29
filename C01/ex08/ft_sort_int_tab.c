/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:15:20 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/09/05 15:34:00 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	swap;

	x = 1;
	while (x < size)
	{
		swap = tab[x];
		y = x -1;
		while (y >= 0 && tab[y] > swap)
		{
			tab[y + 1] = tab[y];
			y = y -1;
		}
		tab[y + 1] = swap;
		x++;
	}
}
/*
int	main(void)
{
	int	tab[5] = {3, 2, 8, 4, 6};
	int	size;
	int	i;
	
	size = 5;
	i = 0;
	
	ft_sort_int_tab(tab, size);

	while (i <= size -1)
	{
		printf("%d", tab[i]);
		i++;
	}
}
*/
