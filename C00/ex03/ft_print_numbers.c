/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:57:50 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/08/31 19:21:33 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	count;

	count = '0';
	while (count >= '0' && count <= '9')
	{
		write (1, &count, 1);
		count++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return(0);
}
*/
