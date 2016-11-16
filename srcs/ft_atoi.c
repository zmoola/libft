/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 10:11:23 by zmoola            #+#    #+#             */
/*   Updated: 2016/11/09 09:43:00 by zmoola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_atoi(const char *str)
{
	long int neg;
	long int num; 
	int cn;

	cn = 0;
	num = 0;
	neg = 1;
	while (str[cn])
	{
		if ((str[cn] == '-') && (ft_isdigit(str[cn + 1])))
			neg = -1;
		else if ((str[cn] == '-') && !(ft_isdigit(str[cn + 1])))
			return (0);
		if ((ft_isdigit(str[cn])))
			num = num * 10 + (str[cn] - '0');
		cn++;
	}
	return (int)(num * neg);
}
