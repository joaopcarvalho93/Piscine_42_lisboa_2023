/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:37:36 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/09/19 10:49:12 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 3 || nb == 2)
	{
		return (1);
	}
	else if (nb < 2)
		return (0);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i < (nb / 2))
	{
		if ((nb) % i == 0)
		{
			return (0);
		}
		i += 2;
	}
	return (1);
}

#include <stdio.h>

int main(void)
{
    int nb;

    nb = 118;
    printf("%d\n", ft_is_prime(nb));
    return (0);
}
