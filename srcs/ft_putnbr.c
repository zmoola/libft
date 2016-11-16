/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 09:34:07 by zmoola            #+#    #+#             */
/*   Updated: 2016/08/21 15:48:49 by zmoola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_ptnbr(long int n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * -1;
	}
	if (n >= 10)
	{
		ft_ptnbr(n / 10);
		ft_ptnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

void		ft_putnbr(int n)
{
	long int num;

	num = n;
	ft_ptnbr(num);
}
