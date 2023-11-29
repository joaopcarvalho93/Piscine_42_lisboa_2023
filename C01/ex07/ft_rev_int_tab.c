/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:01:30 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/09/06 16:01:48 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;

	i = 0;
	size -= 1;
	while (i < size)
	{
		a = tab[size];
		tab[size] = tab [i];
		tab[i] = a;
		i++;
		size--;
	}
}
/*
int	main(void)
{
	int	tab[9] = {2, 1, 3, 6, 5, 9, 7, 8, 4};
	int	size = 9;
	int	x = 0;

	ft_rev_int_tab(tab, size);

	while (x <= size -1)
	{
		printf("%d", tab[x]);
		x++;
	}
}
*/
