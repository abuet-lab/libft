/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinebuet <antoinebuet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:23:47 by antoinebuet       #+#    #+#             */
/*   Updated: 2025/10/14 10:23:15 by antoinebuet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

size_t	check_front(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (set[i])
	{
		if (set[i] != s1[j])
			return (j);
		while (set[i] == s1[j])
			j++;
		i++;
	}
	return (j);
}

size_t	check_end(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(set) - 1;
	j = ft_strlen(s1) - 1;
	while (j > 0)
	{
		if (set[i] != s1[j])
			return ((ft_strlen(s1) - 1) - j);
		while (set[i] == s1[j])
			j--;
		i--;
	}
	return ((ft_strlen(s1) - 1) - j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front;
	size_t	end;
	size_t	i;
	char	*newstring;

	i = 0;
	front = check_front(s1, set);
	end = check_end(s1, set);
	newstring = malloc((ft_strlen(s1) - (front + end)) * sizeof(char));
	if (!newstring)
		return (NULL);
	while (front < (ft_strlen(s1) - end))
		newstring[i++] = s1[front++];
	return (newstring);
}

// int main(void)
// {
// 	char test[] = "aabctestaaabccc";
// 	printf("%s\n",ft_strtrim(test, "abc"));
// }