/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 11:30:37 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/09/18 11:30:56 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	while (power > -1)
	{
		if (power == 0)
			return (1);
		else
			return (nb * ft_recursive_power(nb, (power - 1)));
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int nb;
// 	int power;

// 	nb = 2;
// 	power = 3;

// 	printf("%d\n", ft_recursive_power(nb, power));
// 	return (0);
// }
