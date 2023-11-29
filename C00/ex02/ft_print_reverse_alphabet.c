/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:18:15 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/08/31 11:52:46 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	count;

	count = 'z';
	while (count <= 'z' && count >= 'a')
	{
		write(1, &count, 1);
		count--;
	}
}

/*
int	main(void)
{
	ft_print_reverse_alphabet();
	
	return(0);
}*/
