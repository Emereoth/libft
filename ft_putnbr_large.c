/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_large.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acottier <acottier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:47:26 by acottier          #+#    #+#             */
/*   Updated: 2018/10/30 13:33:19 by acottier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_large(uint64_t n)
{
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar('0' + n);
}
