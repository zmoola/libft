/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 11:00:03 by zmoola            #+#    #+#             */
/*   Updated: 2016/08/21 15:35:44 by zmoola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_size(long int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	i++;
	return (i);
}

static char	*fill_string(long int n, int cnt, char *str, int size)
{
	while (size >= cnt)
	{
		if (n > 9)
		{
			fill_string((n % 10), cnt, str, size);
			n = n / 10;
			size--;
		}
		else
		{
			str[size] = n + '0';
			size--;
		}
	}
	return (str);
}

char		*ft_itoa(int n)
{
	long int num;
	int		size;
	int		cnt;
	char	*str;

	num = n;
	cnt = 0;
	size = find_size(n);
	if ((str = (char *)malloc(sizeof(char) * (size + 1))))
	{
		if (num < 0)
		{
			str[cnt] = '-';
			num = num * -1;
			cnt++;
		}
		str = fill_string(num, cnt, str, size - 1);
		str[size] = '\0';
		return (str);
	}
	else
		return (NULL);
}
