/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 08:49:57 by zmoola            #+#    #+#             */
/*   Updated: 2016/05/12 08:52:43 by zmoola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int cnt;

	cnt = 0;
	while (s[cnt])
		cnt++;
	while ((s[cnt] != (char)c) && (cnt > 0))
		cnt--;
	if (s[cnt] == (char)c)
		return (char *)&s[cnt];
	return (NULL);
}
