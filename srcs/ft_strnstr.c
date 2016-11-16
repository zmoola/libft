/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 16:41:58 by zmoola            #+#    #+#             */
/*   Updated: 2016/08/22 10:43:16 by zmoola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	check(char c, const char *big, size_t cn)
{
	int buf;

	buf = cn;
	while ((cn > 0) && (big[cn] != c))
		cn--;
	if ((big[cn] == c) && (cn != 0))
		return (cn - 1);
	else
		return (buf);
}

char			*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	bcnt;
	size_t	lcnt;
	size_t	buf;
	int		c;

	c = 0;
	bcnt = 0;
	lcnt = 0;
	while ((little[lcnt] && big[bcnt]) && (bcnt < len && lcnt < len))
	{
		if (little[lcnt] == big[bcnt])
		{
			if (lcnt == 0)
				buf = bcnt;
			lcnt++;
		}
		else if (little[lcnt] != big[bcnt])
		{
			if (c == 0)
				bcnt = check(little[0], big, bcnt);
			c++;
			lcnt = 0;
		}
		bcnt++;
	}
	if ((lcnt == ft_strlen(little)) && (lcnt != 0))
		return (char *)&big[buf];
	else if (((big[bcnt] == '\0') && (lcnt == 0) && (ft_strlen(little) > 0))
			|| ((bcnt == len) && (lcnt != ft_strlen(little))))
		return (NULL);
	return (char *)big;
}
