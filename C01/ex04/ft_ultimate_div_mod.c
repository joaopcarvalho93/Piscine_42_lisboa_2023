/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:30:35 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/09/04 18:34:08 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
int	main(void)
{
	int	a, b;

	a = 6;
	b = 4;
	printf("A divisao entre %d e %d e:\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("Valor inteiro: %d\nResto: %d\n", a, b);
	return 0;
}
*/
