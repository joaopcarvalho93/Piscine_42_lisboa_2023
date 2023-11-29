/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 12:12:13 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/09/18 18:36:13 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
	{
		return (0);
	}
	while (i * i < nb && i < 46341)
	{
		i++;
	}
	if (i * i == nb)
	{
		return (i);
	}
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
//     int nb;

//     nb = 9;
//     printf("%d\n", ft_sqrt(nb));
//     return (0);
// }