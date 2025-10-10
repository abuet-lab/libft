/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinebuet <antoinebuet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:27:08 by antoinebuet       #+#    #+#             */
/*   Updated: 2025/10/10 13:56:12 by antoinebuet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ts;

	ts = (unsigned char *) s;
	i = 0;
	while (i < n && ts[i])
	{
		if (ts[i] == c)
			return (ts + i);
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	char c[] = "abc adc";
// 	printf("%s", ft_memchr(c, 'j', 8));
// }