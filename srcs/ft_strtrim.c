/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 14:18:55 by zmoola            #+#    #+#             */
/*   Updated: 2016/08/21 15:31:34 by zmoola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char	*new;
	int		cn;
	int		scnt;
	int		end;

	scnt = 0;
	cn = 0;
	end = (ft_strlen(s) - 1);
	while (s[scnt] == ' ' || s[scnt] == '\n' || s[scnt] == '\t')
		scnt++;
	while(s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	if (scnt >= end)
		return ("");
	if (!(new = (char *)malloc(sizeof(char) * ((end - scnt) + 2))))
		return (NULL);
	while (s[scnt] && (scnt <= end))
	{
		new[cn] = s[scnt];
		cn++;
		scnt++;
	}
	new[cn] = '\0';
	return (new);
}
