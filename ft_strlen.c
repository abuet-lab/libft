/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuet <abuet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 11:32:11 by yourlogin         #+#    #+#             */
/*   Updated: 2025/10/07 18:04:45 by abuet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// int main(void)
// {
// 	printf("%zu\n", ft_strlen("t"));
// 	printf("%zu\n", ft_strlen("test"));
// 	printf("%zu\n", ft_strlen("te"));	
// }