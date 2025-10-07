/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuet <abuet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:58:32 by antoinebuet       #+#    #+#             */
/*   Updated: 2025/10/07 14:43:27 by abuet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int		t;
	int		x;

	x = 0;
	i = 0;
	t = 0;
	while (dst[t])
		t++;
	while (src[x])
		x++;
	while (i < dstsize - 1 || src[i])
	{
		dst[i + t] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (x + t);
}

// int main (void)
// {
// 	char test1[20] = "test";
// 	char test2[] = "reje";
// 	printf("%zu\n", ft_strlcat(test1, test2, 6));
// 	printf("%s\n", test1);
// 	char test3[20] = "test";
// 	char test4[] = "reje";
// 	printf("%zu\n", strlcat(test3, test4, 6));
// 	printf("%s\n", test3);
// }