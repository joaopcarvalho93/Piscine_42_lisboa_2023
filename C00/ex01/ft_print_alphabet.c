/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 09:53:07 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/08/31 10:11:17 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	count;

	count = 'a';
	while (count >= 'a' && count <= 'z')
	{
		write(1, &count, 1);
		count++;
	}
}
/*
int main (void)
{
        ft_print_alphabet();
        return(0);
}
*/
