/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 13:29:57 by zmoola            #+#    #+#             */
/*   Updated: 2016/05/15 13:45:28 by zmoola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		cnt;
	int		cn;

	cnt = 0;
	cn = 0;
	if (!(new = (char *)malloc(sizeof(char) *
	(ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	while (s1[cnt])
	{
		new[cnt] = s1[cnt];
		cnt++;
	}
	while (s2[cn])
	{
		new[cnt] = s2[cn];
		cn++;
		cnt++;
	}
	new[cnt] = '\0';
	return (new);
}
