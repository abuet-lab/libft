/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinebuet <antoinebuet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:40:53 by antoinebuet       #+#    #+#             */
/*   Updated: 2025/10/10 13:57:59 by antoinebuet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*ts1;
	char	*ts2;
	size_t	i;

	ts1 = (char *) s1;
	ts2 = (char *) s2;
	i = 0;
	while (i < n && ts1[i] == ts2[i])
		i++;
	return (ts1[i] - ts2[i]);
}
// int main (void)
// {
// 	char s1[] = "asd";
// 	char s2[] = "test";
// 	printf("%d", ft_memcmp(s1, s2, 6));
// }