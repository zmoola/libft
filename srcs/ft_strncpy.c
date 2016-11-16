/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 15:35:58 by zmoola            #+#    #+#             */
/*   Updated: 2016/11/09 16:29:11 by zmoola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t cnt;

	cnt = 0;
	while (src[cnt] && (cnt < len))
	{
		dst[cnt] = src[cnt];
		cnt++;
	}
	if (cnt < len)
		while (cnt < len)
		{
			dst[cnt] = '\0';
			cnt++;
		}
	return (dst);
}
