/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:04:52 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/09/10 19:15:43 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*
#include <unistd.h>

int main(void)
{
	char	str[] = "AbCdeFghiJklMNoPqRsTuVwXyZ";

	ft_strupcase(str);
	write(1, str, 26);
	write(1, "\n", 1);
	return (0);
}*/
