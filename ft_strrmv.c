/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrmv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acottier <acottier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/18 11:49:15 by acottier          #+#    #+#             */
/*   Updated: 2018/06/19 10:42:52 by acottier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrmv(char *str, char c)
{
	int		length;
	int		i;
	char	*res;

	length = 0;
	i = -1;
	while (str[++i])
		if (str[i] != c)
			length++;
	res = ft_strnew(length);
	i = -1;
	while (str[++i])
	{
		if (str[i] != c)
			res[length] = str[i];
	}
	ft_strdel(&str);
	return (res);
}
