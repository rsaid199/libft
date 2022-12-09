/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaid <rsaid@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:55:21 by rsaid             #+#    #+#             */
/*   Updated: 2022/12/09 19:37:53 by rsaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*x;
	size_t	i;
	size_t	len;

	if (size && nmemb > (SIZE_MAX / size))
		return (NULL);
	len = nmemb * size;
	x = malloc(len);
	i = 0;
	if (!x)
	{
		return (NULL);
	}
	while (i < len)
	{
		*(char *)(x + i) = '\0';
		i++;
	}
	return (x);
}
