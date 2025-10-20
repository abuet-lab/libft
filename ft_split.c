/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinebuet <antoinebuet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:58:31 by antoinebuet       #+#    #+#             */
/*   Updated: 2025/10/20 16:11:05 by antoinebuet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int	number_string(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count + 1);
}

static int	number_caractere(char const *s, char c, int i)
{
	int		count;
	size_t	temp;

	count = 0;
	temp = (size_t) i;
	if (temp >= ft_strlen(s))
		return (0);
	while (s[temp] != c && s[temp])
	{
		count++;
		temp++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		t;
	int		tab1;
	int		tab2;
	int		num_car;
	char	**split;

	t = 0;
	tab1 = 0;
	split = malloc((number_string(s, c) + 1) * sizeof(char));
	while (tab1 <= number_string(s, c))
	{
		num_car = number_caractere(s, c, t);
		split[tab1] = malloc((num_car + 1) * sizeof(char));
		tab2 = 0;
		while (tab2 < num_car)
		{
			split[tab1][tab2] = s[t];
			tab2++;
			t++;
		}
		split[tab1][tab2] = '\0';
		tab1++;
		t++;
	}
	return (split);
}

// int main(void)
// {
// 	char **split;
// 	char test[] = "berete";
// 	int i = 0;
// 	split = ft_split(test,'e');
// 	while (split[i])
// 	{
// 		printf("%s\n", split[i]);
// 		i++;
// 	}
// }