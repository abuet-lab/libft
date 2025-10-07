/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinebuet <antoinebuet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:41:36 by antoinebuet       #+#    #+#             */
/*   Updated: 2025/10/03 22:07:37 by antoinebuet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

 size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
 {
	size_t	i;

	i = 0;
	while (i < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
 }

//  int main (void)
//  {
// 	char test1[] = "test";
// 	char test2[] = "qqqqqqq";
// 	printf("%zu\n", ft_strlcpy(test2, test1, 4));
// 	printf("%s", test2);
//  }