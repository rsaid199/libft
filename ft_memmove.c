/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaid <rsaid@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:24:48 by rsaid             #+#    #+#             */
/*   Updated: 2022/12/08 21:17:48 by rsaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*fdst;
	char	*fsrc;

	fdst = (char *)dst;
	fsrc = (char *)src;
	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst < src)
	{
		return (ft_memcpy(dst, src, len));
	}
	while (i < len--)
	{
		fdst[len] = fsrc[len];
	}
	return (dst);
}
/*
int main()
{
	ft_memmove(((void *)0), ((void *)0), 5);
}
*/