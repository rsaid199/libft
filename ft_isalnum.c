/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaid <rsaid@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:38:43 by rsaid             #+#    #+#             */
/*   Updated: 2022/11/27 15:32:07 by rsaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (c >= 48 && c <= 57);
	}
	else if (c >= 65 && c <= 90)
	{
		return (c >= 65 && c <= 90);
	}
	else if (c >= 97 && c <= 122)
	{
		return (c >= 97 && c <= 122);
	}
	return (0);
}

/*
int main()
{
    printf("%d\n", ft_isalnum());
    printf("%d", isalnum());
}
*/
