/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinebuet <antoinebuet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:07:02 by antoinebuet       #+#    #+#             */
/*   Updated: 2025/10/28 11:26:33 by antoinebuet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*tdst;
	const char	*tsrc;

	if (dst == src)
		return (dst);
	tdst = (char *) dst;
	tsrc = (const char *) src;
	if (tdst <= tsrc || tdst >= tsrc + len)
	{
		while (len--)
			*tdst++ = *tsrc++;
	}
	else
	{
		tdst += len;
		tsrc += len;
		while (len--)
			*--tdst = *--tsrc;
	}
	return (dst);
}

//  int main (void)
//  {
// 	char buffer[] = "ABCDE";
// 	ft_memmove(buffer + 1, buffer,6); // chevauchement géré
// 	printf("%s\n", buffer); // → "AABCD"
//  }