/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinebuet <antoinebuet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:58:31 by antoinebuet       #+#    #+#             */
/*   Updated: 2025/10/24 22:43:47 by antoinebuet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static size_t	number_string(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static size_t	number_caractere(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (s[count] != c && s[count])
		count++;
	return (count);
}

static int	free_array(char **array, size_t n)
{
	if (!array[n])
	{
		while (n > 0)
		{
			free(array[n - 1]);
			n--;
		}
		return (0);
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	size_t	tab1;
	size_t	tab2;
	size_t	words;
	char	**split;

	tab1 = 0;
	split = malloc((number_string(s, c) + 1) * sizeof(char *));
	if (!split || !s)
		return (NULL);
	words = number_string(s, c);
	while (tab1 < words)
	{
		while (*s && *s == c)
			s++;
		tab2 = number_caractere(s, c);
		split[tab1] = malloc((tab2 + 1) * sizeof(char));
		if (free_array(split, tab1) == 0)
			return (NULL);
		ft_strlcpy(split[tab1], s, tab2 + 1);
		s += tab2;
		tab1++;
	}
	split[tab1] = NULL;
	return (split);
}

// int main(void)
// {
// 	char **split;
// 	char test[] = "aebec";
// 	int i = 0;
// 	split = ft_split(test,'e');
// 	while (split[i])
// 	{
// 		printf("%s\n", split[i]);
// 		i++;
// 	}
// }