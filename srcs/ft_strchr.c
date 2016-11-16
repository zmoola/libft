/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 08:41:16 by zmoola            #+#    #+#             */
/*   Updated: 2016/05/12 08:46:48 by zmoola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int cnt;

	cnt = 0;
	while ((s[cnt] != (char)c) && s[cnt])
		cnt++;
	if (s[cnt] == (char)c)
		return (char *)&s[cnt];
	return (NULL);
}
