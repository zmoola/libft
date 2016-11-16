/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 08:12:29 by zmoola            #+#    #+#             */
/*   Updated: 2016/11/09 17:53:25 by zmoola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dcnt;
	size_t	scnt;
	size_t	ret;

	dcnt = 0;
	scnt = 0;
	ret = (ft_strlen(dst) + ft_strlen(src));
	while ((dst[dcnt] != '\0'))
		dcnt++;
	if (dcnt < (size - 1))
	{	while (dcnt < (size - 1))
		{
			dst[dcnt] = src[scnt];
			dcnt++;
			scnt++;
		}
		dst[dcnt] = '\0';
	}
	if(dcnt >= size)
		ret = (ft_strlen(src) + size);
	return (ret);
}
