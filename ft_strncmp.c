/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaid <rsaid@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:12:58 by rsaid             #+#    #+#             */
/*   Updated: 2022/12/08 22:06:23 by rsaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while (i != n)
	{
		if ((s1[i] != s2[i]) || s1[i] == 0 || s2[i] == 0)
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
    char *s1 = "\x12\xff\x65\x12\xbd\xde\xad";
    char *s2 = "\x12\x02";
    size_t size = 6;
    //int i1 = (strncmp(s1, s2, size));
    int i2 = (ft_strncmp(s1, s2, size));
	//printf("%d\n", i1);
	printf("%d\n", i2);
}
*/