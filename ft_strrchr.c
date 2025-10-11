/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuet <abuet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:01:22 by abuet             #+#    #+#             */
/*   Updated: 2025/10/11 13:21:49 by abuet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*temp;

	temp = (char *) s;
	i = ft_strlen(temp);
	while (i > 0)
	{
		if (temp[i] == (char) c)
			return (temp + i);
		i--;
	}
	if (temp[i] == (char) c)
		return (temp + i);
	return (0);
}

// int main(void)
// {
// 	char tesst[] = "b5ah";
// 	printf("%s\n",ft_strrchr(tesst, 'c'));
// 	printf("%s\n",strrchr(tesst, 'c'));
// }