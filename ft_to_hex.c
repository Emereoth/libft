/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acottier <acottier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/17 16:31:25 by acottier          #+#    #+#             */
/*   Updated: 2018/12/13 10:30:51 by acottier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_to_hex(uint64_t n)
{
	static char	table[16] = 
	{'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
	'a', 'b', 'c', 'd', 'e', 'f'};
	char		*res;
	int			length;
	uint64_t	tmp;

	tmp = n;
	length = 0;
	while (tmp > 0)
	{
		tmp /= 16;
		length++;
	}
	res = ft_strnew(length);
	while (n > 0)
	{
		res[length - 1] = table[n % 16];
		length--;
		n /= 16;
	}
	return (res);
}

char	*ft_to_hex_32(uint32_t n)
{
	static char	table[16] = 
	{'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
	'a', 'b', 'c', 'd', 'e', 'f'};
	char		*res;
	int			length;
	uint32_t	tmp;

	tmp = n;
	length = 0;
	while (tmp > 0)
	{
		tmp /= 16;
		length++;
	}
	res = ft_strnew(length);
	while (n > 0)
	{
		res[length - 1] = table[n % 16];
		length--;
		n /= 16;
	}
	return (res);
}