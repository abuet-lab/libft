/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinebuet <antoinebuet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:23:29 by antoinebuet       #+#    #+#             */
/*   Updated: 2025/10/14 15:45:40 by antoinebuet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void reverse_tab(char *tab)
{
	char	*reversetab;
	int i;
	int j;

	i = 0;
	j = ft_strlen(tab);
	reversetab  = malloc(ft_strlen(tab) * sizeof(char));
	while (tab[i])
		reversetab[i++] = tab[j--];
	ft_strlcpy(tab, reversetab, ft_strlen(tab));
	free(reversetab);
}

char	*ft_itoa(int n)
{
	char	*rep;
	int		i;
	int		count;

	i = n;
	count = 0;
	while(i > 10)
	{
		i /= 10;
		count++;
	}
	i = 0;
	rep = malloc ((count + 1) * sizeof(char));
	while (n != 0)
	{
		rep[i] = (n % 10) + 48;
		n /= 10;
		i++;
	}
	reverse_tab(rep);
	return(rep);
}

int main(void)
{
	printf("%s\n", ft_itoa(120));
}