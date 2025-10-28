/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinebuet <antoinebuet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:01:22 by abuet             #+#    #+#             */
/*   Updated: 2025/10/28 11:03:27 by antoinebuet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	const char	*temp;

	temp = (char *) s;
	i = ft_strlen(temp);
	while (i > 0)
	{
		if (temp[i] == (char) c)
			return ((char *)temp + i);
		if (i == 0)
			break ;
		i--;
	}
	if (temp[i] == (char) c)
		return ((char *)temp + i);
	return (0);
}

// int main(void)
// {
// 	char tesst[] = "b5ah";
// 	printf("%s\n",ft_strrchr(tesst, 'c'));
// 	printf("%s\n",strrchr(tesst, 'c'));
// }