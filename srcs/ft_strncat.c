/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 16:38:30 by zmoola            #+#    #+#             */
/*   Updated: 2016/05/10 16:46:35 by zmoola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		cnt;
	size_t	i;

	cnt = 0;
	i = 0;
	while (s1[cnt] != '\0')
		cnt++;
	while (s2[i] && (i < n))
	{
		s1[cnt] = s2[i];
		i++;
		cnt++;
	}
	s1[cnt] = '\0';
	return (s1);
}
