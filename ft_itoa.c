/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinebuet <antoinebuet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:23:29 by antoinebuet       #+#    #+#             */
/*   Updated: 2025/10/21 22:21:36 by antoinebuet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static long	len_int(long n)
{
	long	count;
	long	i;

	count = 0;
	i = n;
	if (n < 0)
	{
		n *= -1;
		count++;
		i = n;
	}
	while (i >= 10)
	{
		i /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*rep;
	long	i;
	long	count;
	long	nbr;

	nbr = n;
	count = len_int(nbr);
	i = count;
	rep = malloc((count + 2) * sizeof(char));
	if (!rep)
		return (NULL);
	rep[i + 1] = '\0';
	if (nbr < 0)
	{
		nbr *= -1;
		rep[0] = '-';
	}
	if (nbr == 0)
		rep[0] = '0';
	while (nbr != 0)
	{
		rep[i--] = (nbr % 10) + 48;
		nbr /= 10;
	}
	return (rep);
}

// int main(void)
// {
// 	printf("%s\n", ft_itoa(47483648));
// }