/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acottier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:09:37 by acottier          #+#    #+#             */
/*   Updated: 2015/12/10 15:22:30 by acottier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char*)s);
	if (s == NULL)
		return (NULL);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char*)&s[i]);
		else
			i--;
	}
	return (0);
}
