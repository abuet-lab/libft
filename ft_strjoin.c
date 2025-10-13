/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinebuet <antoinebuet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:57:44 by antoinebuet       #+#    #+#             */
/*   Updated: 2025/10/13 23:01:09 by antoinebuet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size2;
	char	*join;
	int		i;
	int		j;

	i = 0;
	j = 0;
	size2 = ft_strlen(s2);
	join = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!join)
		return (NULL);
	while (s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	while (s2[j])
		join[i++] = s2[j++];
	return (join);
}

// int main(void)
// {
// 	char test[] = "test";
// 	char test1[] = "test";
// 	printf("%s", ft_strjoin(test,test1));
// }
