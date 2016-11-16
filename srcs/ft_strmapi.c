/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 12:39:26 by zmoola            #+#    #+#             */
/*   Updated: 2016/08/21 15:59:05 by zmoola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	cnt;
	size_t			size;
	char			*new;

	cnt = 0;
	size = ft_strlen(s);
	if (!(new = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (s[cnt])
	{
		new[cnt] = f(cnt, s[cnt]);
		cnt++;
	}
	new[cnt] = '\0';
	return (new);
}
