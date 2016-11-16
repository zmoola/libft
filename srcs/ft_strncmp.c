/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 10:45:46 by zmoola            #+#    #+#             */
/*   Updated: 2016/08/21 14:42:06 by zmoola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t cnt;

	cnt = 0;
	while ((cnt < n) && (s1[cnt] && s2[cnt]) && (s1[cnt] == s2[cnt]))
		cnt++;
	return (int)((unsigned char)s1[cnt] - (unsigned char)s2[cnt]);
}
