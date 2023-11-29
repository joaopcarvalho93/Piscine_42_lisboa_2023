/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:54:29 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/09/04 15:51:48 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int	main(void)
{
	int	i, ni;

	i = 42;
	ni = 10;
	
	printf("Antes: %d %d\n", i, ni);
	ft_swap(&i, &ni);
	printf("depois: %d %d\n", i, ni);
	return 0;
}
*/
