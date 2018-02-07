/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acottier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 14:28:43 by acottier          #+#    #+#             */
/*   Updated: 2015/12/18 05:02:51 by acottier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(char *s1, char *s2, int n)
{
	int		i;
	int		j;
	char	*k;

	i = 0;
	k = 0;
	if (s2[0] == '\0')
		return (s1);
	while (s1[i] != '\0' && i < n)
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			while (s1[i + j] == s2[j] && s2[j] != '\0' && (i + j) <= n)
				j++;
			if (s2[j] == '\0')
				return (&s1[i]);
		}
		i++;
	}
	return (0);
}
