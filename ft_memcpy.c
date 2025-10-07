/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinebuet <antoinebuet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:22:00 by antoinebuet       #+#    #+#             */
/*   Updated: 2025/10/03 22:01:34 by antoinebuet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*tdst;
	char	*tsrc;
	size_t i;
	
	i = 0;
	tdst = (char *) dst;
	tsrc = (char *) src;
	while (i <= n)
	{
		tdst[i] = tsrc[i];
		i++;
		n--;
	}
	return(dst);
}

// int main() 
// {
// 	char test1[] = "test";
// 	char test2[] = "zzzz";
// 	printf("%s",(char *) ft_memcpy(test2, test1, 6));
    
// }