/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuet <abuet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:09:33 by abuet             #+#    #+#             */
/*   Updated: 2025/10/11 13:44:42 by abuet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*temp;

	temp = (char *) s;
	i = 0;
	while (temp[i])
	{
		if (temp[i] == (char) c)
			return (temp + i);
		i++;
	}
	if ((char) c == '\0')
		return (temp + i);
	return (0);
}

// int main (void)
// {
// 	char s[] = "abcdefghijklmnop";
// 	printf("%s\n", ft_strchr(s, 't'+ 256));
// 	printf("%s", strchr(s, '\0'));
// }