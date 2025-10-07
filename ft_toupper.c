/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinebuet <antoinebuet@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 17:15:31 by antoinebuet       #+#    #+#             */
/*   Updated: 2025/10/03 21:44:55 by antoinebuet      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - (97 - 65));
	return (c);
}

// int main(void)
// {
// 	int c = 97;
// 	printf("%d", ft_toupper(c));
// }
