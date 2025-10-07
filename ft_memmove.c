/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuet <abuet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:07:02 by antoinebuet       #+#    #+#             */
/*   Updated: 2025/10/07 15:38:42 by abuet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tdst;
	char	*tsrc;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	tdst = (char *) dst;
	tsrc = (char *) src;
	if (tdst <= tsrc)
	{
		i = 0;
		while (i++ < len)
		{
			tdst[i] = tsrc[i];
		}
	}
	else
	{
		i = len;
		while (--i > 0)
		{
			tdst[i] = tsrc[i];
		}
	}
	return (dst);
}

//  int main (void)
//  {
// 	char buffer[] = "ABCDE";
// 	ft_memmove(buffer + 1, buffer,6); // chevauchement géré
// 	printf("%s\n", buffer); // → "AABCD"
//  }