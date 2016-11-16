/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 14:16:06 by zmoola            #+#    #+#             */
/*   Updated: 2016/05/26 14:07:33 by zmoola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			cnt;
	unsigned char	*dest;
	unsigned char	*source;

	cnt = 0;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	while (cnt < n)
	{
		dest[cnt] = source[cnt];
		cnt++;
	}
	return (dst);
}
