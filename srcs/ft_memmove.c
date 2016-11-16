/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 10:18:10 by zmoola            #+#    #+#             */
/*   Updated: 2016/11/09 14:29:22 by zmoola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			cnt;
	unsigned char	*dest;
	unsigned char	*source;

	cnt = 0;
	source = (unsigned char *)src;
	dest = (unsigned char *)dst;
	if ((src < dst) && ((src + len) > dst))
	{
		while (len > 0)
		{
			dest[len] = source[len];
			len--;
		}
		dest[len] = source[len];
	}
	else
		while (cnt < len)
		{
			dest[cnt]  = source[cnt];
			cnt++;
		}
	return (dest);
}
