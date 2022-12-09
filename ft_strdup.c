/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaid <rsaid@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:32:01 by rsaid             #+#    #+#             */
/*   Updated: 2022/12/09 14:55:02 by rsaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		y;
	char	*x;

	x = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!x)
		return (NULL);
	i = 0;
	y = 0;
	while (s[i] != '\0')
	{
		x[i] = s[i];
		i++;
	}
	x[i] = '\0';
	return (x);
}
/*
int main()
{
char *ptr;

	ptr = ft_strdup("lol");
	printf("%s", ptr);
}
*/