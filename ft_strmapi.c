/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinebuet <antoinebuet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:20:09 by antoinebuet       #+#    #+#             */
/*   Updated: 2025/10/14 11:19:13 by antoinebuet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	int		i;

	i = 0;
	new = malloc(ft_strlen(s) * sizeof(char));
	if (!new)
		return (NULL);
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	return (new);
}

// char to_uppercase(unsigned int i, char c)
// {
//     (void)i; 
//     return ((char)ft_toupper((unsigned char)c));
// }
// int main(void)
// {
// 	char test[] = "test";
// 	printf("%s\n", ft_strmapi(test, to_uppercase));
// }