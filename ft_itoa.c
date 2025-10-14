/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuet <abuet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:23:29 by antoinebuet       #+#    #+#             */
/*   Updated: 2025/10/14 18:52:57 by abuet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

// static void	reverse_tab(char *tab)
// {
// 	char	*reversetab;
// 	size_t	i;
// 	int		j;

// 	i = 0;
// 	j = ft_strlen(tab) - 1;
// 	reversetab = malloc((ft_strlen(tab) + 1) * sizeof(char));
// 	while (i < ft_strlen(tab))
// 		reversetab[i++] = tab[j--];
// 	ft_strlcpy(tab, reversetab, ft_strlen(tab) + 1);
// 	free(reversetab);
// }
static long len_int(long n)
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
	rep[i+1] = '\0';
	if (nbr < 0)
	{
		nbr *= -1;
		rep[0] = '-';
	}
	if(nbr == 0)
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