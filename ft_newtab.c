/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newtab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acottier <acottier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 10:19:00 by acottier          #+#    #+#             */
/*   Updated: 2018/06/19 10:45:12 by acottier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_newtab(int size)
{
	char		**res;
	int			i;

	i = 0;
	res = (char **)malloc(sizeof(char*) * size + 1);
	while (i <= size)
		i++;
	res[i] = NULL;
	return (res);
}
