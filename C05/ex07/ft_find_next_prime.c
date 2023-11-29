/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:49:56 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/09/18 19:21:27 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

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

int	ft_find_next_prime(int nb)
{
	if (nb < 4)
	{
		if (nb == 3)
			return (3);
		else
			return (2);
	}
	while (nb > 3)
	{
		if (ft_is_prime(nb) == 1)
		{
			return (nb);
		}
		nb++;
	}
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
//     int nb;

//     nb = 4;
//     printf("The next prime is: %d\n", ft_find_next_prime(nb));
//     return (0);
// }
