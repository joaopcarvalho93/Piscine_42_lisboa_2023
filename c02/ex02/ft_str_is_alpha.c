/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:17:55 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/09/11 12:29:39 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122) 
			|| (str[i] >= 65 && str[i] <= 91))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	str[] = "fsdff!!sfw";
	
	printf("%d", ft_str_is_alpha(str));
	return(0);
}*/
