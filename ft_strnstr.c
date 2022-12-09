/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaid <rsaid@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:36:44 by rsaid             #+#    #+#             */
/*   Updated: 2022/12/09 19:10:25 by rsaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		if (big[0] == '\0' && little[0] != '\0')
			return ((char *)&big[i + 1]);
		while (big[i] == little[x])
		{
			i++;
			x++;
			if (little[x] == '\0' && i <= len && i >= x)
				return ((char *)&big[i - x]);
			if (big[i] != little[x])
				i = 0;
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char haystack[30] = "aaabcabcd";
    char needle[10] = "aabc";
	printf("%s",strnstr(haystack, needle, -1));
	//ft_strnstr(haystack, "abcd", 9)
}
*/
