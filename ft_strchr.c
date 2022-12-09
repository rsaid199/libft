/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaid <rsaid@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:03:41 by rsaid             #+#    #+#             */
/*   Updated: 2022/11/28 20:56:38 by rsaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	x;

	i = 0;
	x = ft_strlen(s);
	while (i <= x)
	{
		if (s[i] == (char)c)
			return (((char *)s + i));
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char *str;
	char str2[] = "bonjour";
	printf("%s\n", ft_strchr(str2, '\0'));
	printf("%s", strchr(str2, '\0'));
}
*/