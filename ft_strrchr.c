/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaid <rsaid@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:16:53 by rsaid             #+#    #+#             */
/*   Updated: 2022/11/28 21:01:33 by rsaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	x;

	i = 0;
	while (s[i])
	{
		i++;
	}
	x = i;
	while (x >= 0)
	{
		if (s[x] == (char) c)
		{
			return ((char *)(s + x));
		}
		x--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    const char *str = "wecc.fv";
    char z = 'l';

    printf("%s\n", ft_strrchr(str, z));
    printf("%s", strrchr(str, z));
}
*/
