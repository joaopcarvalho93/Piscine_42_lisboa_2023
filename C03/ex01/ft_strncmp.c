/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:55:59 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/09/12 18:21:54 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (n > 0) 
	{
		if ((s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') && i < n - 1)
		{	
			i++;
		}
		else
			return (s1[i] - s2[i]);
	}
	return (0);		
}
#include <stdio.h>

int main(void)
{
    char    s1[] = "lkfwfwfa";
    char    s2[] = "lkfwfwaq";
    unsigned int    n;

    n = 6;
    printf("%d\n", ft_strncmp(s1, s2, n));
    return (0);
}