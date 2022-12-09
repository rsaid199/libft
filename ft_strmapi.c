/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaid <rsaid@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 18:50:05 by rsaid             #+#    #+#             */
/*   Updated: 2022/12/09 17:20:13 by rsaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*x;
	int				len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	x = malloc(sizeof(char) * len + 1);
	if (!x)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		x[i] = f(i, s[i]);
		i++;
	}
	x[i] = '\0';
	return (x);
}
