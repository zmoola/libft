/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 07:45:00 by zmoola            #+#    #+#             */
/*   Updated: 2016/11/09 14:40:15 by zmoola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			cnt;
	unsigned char	*str;

	cnt = 0;
	str = (unsigned char *)s;
	while ((cnt < n) && (str[cnt] != (unsigned char)c) && str[cnt])
		cnt++;
	if (str[cnt] == (unsigned char)c)
		return (&str[cnt]);
	return (NULL);
}
