/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 15:10:27 by zmoola            #+#    #+#             */
/*   Updated: 2016/06/05 09:59:34 by zmoola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*buf;
	int		cnt;

	cnt = 0;
	if ((buf = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
	{
		while (s1[cnt])
		{
			buf[cnt] = s1[cnt];
			cnt++;
		}
		buf[cnt] = '\0';
		return (buf);
	}
	else
		return (NULL);
}
