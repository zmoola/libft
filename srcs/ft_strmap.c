/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 12:25:59 by zmoola            #+#    #+#             */
/*   Updated: 2016/08/21 15:58:38 by zmoola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		cnt;
	size_t	size;
	char	*new;

	cnt = 0;
	size = ft_strlen(s);
	if (!(new = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (s[cnt])
	{
		new[cnt] = f(s[cnt]);
		cnt++;
	}
	new[cnt] = '\0';
	return (new);
}
