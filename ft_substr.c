/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinebuet <antoinebuet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:19:38 by antoinebuet       #+#    #+#             */
/*   Updated: 2025/10/13 13:18:16 by antoinebuet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		i;
	size_t	t;

	i = 0;
	t = 0;
	substr = malloc((len * sizeof(char)) + 1);
	if (!substr)
		return (NULL);
	while (i < start)
		i++;
	while (t < len && s[i])
		substr[t++] = s[i++];
	return (substr);
}

// int main(void)
// {
// 	char test[] = "abc defgh";
// 	printf("%s\n", ft_substr(test, 4, 3));
// }