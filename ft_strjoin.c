/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaid <rsaid@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:19:02 by rsaid             #+#    #+#             */
/*   Updated: 2022/12/09 15:49:46 by rsaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		s2i;
	char	*z;

	i = 0;
	s2i = 0;
	if (!s1 || !s2)
		return (NULL);
	z = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!z)
		return (NULL);
	while (s1[i] != '\0')
	{
		z[i] = s1[i];
		i++;
	}
	while (s2[s2i] != '\0')
	{
		z[i] = s2[s2i];
		i++;
		s2i++;
	}
	z[i] = '\0';
	return (z);
}
// int main()
// {
// 	char *s1 = "where is my ";
// 	char *s2 = "malloc ???";

// 	char *res = ft_strjoin(s2, s1);
// 	printf("%s", res);
// }
