/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:06:52 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/09/18 18:15:38 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = (nb - 1);
	if (nb < 0)
		return (0);
	if (nb == 0)
	{
		return (1);
	}
	while (i > 0)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}
// #include <stdio.h>

// int main(void)
// {
//     int nb;

//     nb = 0;
//     printf("%d\n", ft_iterative_factorial(nb));
//     return (0);
// }

// calculo fatorial n!

// se o input nao for valido return 0
