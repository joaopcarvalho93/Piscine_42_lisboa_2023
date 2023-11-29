/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:12:21 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/09/11 16:12:25 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char s1[] = "ola sou o joao";
// 	char s2[] = "ole sei o quiz";

// 	printf("%d\n", ft_strcmp(s1, s2));
// 	return (0);
// }
