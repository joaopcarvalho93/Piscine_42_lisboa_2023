/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhorta-c <jhorta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 11:41:03 by jhorta-c          #+#    #+#             */
/*   Updated: 2023/10/17 23:03:26 by jhorta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_len(char **strs, int size, char *sep)
{
	int	i;
	int	j;
	int	result;

	i = 0;
	j = 0;
	result = 0;
	while (sep[i] != '\0')
	{
		i++;
		result++;
	}
	result = result * (size - 1);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			j++;
			result++;
		}
		i++;
	}
	return (result);
}

void	ft_join(char *str, char *result, int *i)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		result[*i] = str[j];
		j++;
		(*i)++;
	}
}

char	*empty_freeable(void)
{
	char	*rt_str;

	rt_str = (char *)malloc(1);
	*rt_str = '\0';
	return (rt_str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	if (size == 0)
		return (empty_freeable());
	len = ft_len(strs, size, sep);
	result = (char *)malloc((len + 1) * sizeof(char));
	while (size > 0)
	{
		ft_join(strs[j], result, &i);
		j++;
		if ((size - 1) > 0)
		{
			ft_join(sep, result, &i);
		}
		size--;
	}
	result[i] = '\0';
	return (result);
}

// int	main(void)
// {
// 	char *a;
// 	char *strs[] = {"1", "2"};
// 	char *sep = "__asfasf_";

// 	a = ft_strjoin(2, strs, sep);
// 	printf("%s", a);
// 	printf("\n");
// 	free(a);
// 	return (0);
// }