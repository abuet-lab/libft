/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuet <abuet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 18:05:43 by abuet             #+#    #+#             */
/*   Updated: 2025/10/07 18:58:08 by abuet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if ( n == 0)
		return (1);
	while ((s1[i] == s2[i] && i < n) && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int main(void)
{
	char test1[] = "teste";
	char test2[] = "test";
	printf("%d\n", ft_strncmp(test1, test2, 7));
}