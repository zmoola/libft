/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 16:42:47 by zmoola            #+#    #+#             */
/*   Updated: 2016/05/26 14:06:39 by zmoola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			cnt;
	unsigned char	*buf;

	cnt = 0;
	buf = (unsigned char *)b;
	while (cnt < len)
	{
		buf[cnt] = (unsigned char)c;
		cnt++;
	}
	return (b);
}
