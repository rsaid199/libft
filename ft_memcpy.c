/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaid <rsaid@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:24:45 by rsaid             #+#    #+#             */
/*   Updated: 2022/11/21 17:47:59 by rsaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dest1;
	char	*src1;

	dest1 = (char *)dst;
	src1 = (char *)src;
	i = 0;
	if (n == 0 || dst == src)
	{
		return (dst);
	}
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dst);
}

/*
int main()
{
	//char try[] = "hello";
	char dest[] = "world";
	
	memmove(dest + 2, dest, 2);
	// ft_memcpy(dest, try + 2, 3);
	printf("%s\n", dest);
}
*/
