/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:48:55 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/09/18 18:32:13 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		if (nb == 1)
			return (nb);
		else
			return (nb * (ft_recursive_factorial(nb - 1)));
	}
	return (0);
}
// #include <stdio.h>

// int main(void)
// {
//     int nb;

//     nb = -2;
//     printf("%d\n", ft_recursive_factorial(nb));
//     return (0);
// }