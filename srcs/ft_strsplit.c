/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmoola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 09:16:45 by zmoola            #+#    #+#             */
/*   Updated: 2016/11/10 09:16:51 by zmoola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	delimiter;
	int	count;

	delimiter = 0;
	count = 0;
	while (*s != '\0')
	{
		if (delimiter == 1 && *s == c)
			delimiter = 0;
		if (delimiter == 0 && *s != c)
		{
			delimiter = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static int	ft_word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s != '\0' && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**ret;
	int		i;
	int		words;

	i = 0;
	words = ft_count_words(s, c);
	if (!(ret = (char **)malloc(sizeof(*ret) * (words + 1))))
		return (NULL);
	while (words--)
	{
		while (*s == c && *s != '\0')
			s++;
		ret[i] = ft_strsub(s, 0, ft_word_len(s, c));
		if (ret[i] == NULL)
			return (NULL);
		s = s + ft_word_len(s, c);
		i++;
	}
	ret[i] = NULL;
	return (ret);
}
