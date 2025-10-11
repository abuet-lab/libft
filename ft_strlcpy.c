/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuet <abuet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 15:41:36 by antoinebuet       #+#    #+#             */
/*   Updated: 2025/10/11 20:41:04 by abuet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(src);
	if (dstsize == 0)
		return (size);
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (size);
}

//  int main (void)
//  {
// 	//char test1[] = "lorem ipsum";
// 	char dst[] = "^@rrrrr^@^@^@^@^@^@^@^@^@";
// 	//printf("%s\n", test2);
// 	//printf("%zu\n", ft_strlcpy(test2, test1, 3));
// 	ft_strlcpy(dst, "", 15);
// 	printf("%s\n", dst);
//  }