/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:23:50 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/08/31 15:40:37 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_escrever(char na, char nb, char nc)
{
	write(1, &na, 1);
	write(1, &nb, 1);
	write(1, &nc, 1);
	if (na != '7' || nb != '8' || nc != '9')
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_escrever(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

/*
int main(void)
{
	ft_print_comb();
	return(0);
}*/
