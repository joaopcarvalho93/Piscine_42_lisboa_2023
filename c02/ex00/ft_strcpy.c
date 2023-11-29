/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:03:36 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/09/10 15:12:05 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
    char    src[] = "sou o joao";
    char    dest[12] = "nao tenho";

    printf("ANTES: %s\n", dest);
    ft_strcpy(dest, src);
    printf("DEPOIS: %s\n", dest);
    return(0);
}*/
