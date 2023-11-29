/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:35:34 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/09/12 16:50:12 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_leng(char *dest)
{
	unsigned int	i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	n;
	unsigned int	i;

	n = 0;
	i = ft_leng(dest);
	while (src[n] != '\0' && n < nb)
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char src[] = " joao Pedro";
// 	char dest[20] = "eu sou";
// 	unsigned int nb;

// 	nb = 3;
// 	printf("%s\n", ft_strncat(dest, src, nb));
// 	return (0);
// }