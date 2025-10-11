/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuet <abuet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:27:08 by antoinebuet       #+#    #+#             */
/*   Updated: 2025/10/11 13:14:16 by abuet            ###   ########.fr       */
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
	while (i < n)
	{
		if (ts[i] == (unsigned char) c)
			return (ts + i);
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	// char c[] = "abcadc";
// 	// printf("%s\n", ft_memchr(c, 'c', 8));
// 	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
//     printf("%s\n", (char *)ft_memchr(tab, -1, 7));
// }