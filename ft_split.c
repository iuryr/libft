/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iusantos <iusantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:02:40 by iusantos          #+#    #+#             */
/*   Updated: 2023/09/20 19:10:01 by iusantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**split;
	char	**return_split;
	int		nbr_words;
	int		i;
	int		size;

	nbr_words = count_word(s, c);
	split = ft_calloc(nbr_words + 1, sizeof (char *));
	return_split = split;
	if (split == NULL)
		return (NULL);
	if (!*s)
		return (split);
	i = -1;
	while (++i < nbr_words)
	{
		size = ft_strchr(s, c) - s;
		*split++ = ft_substr(s, 0, size);
		s += size;
		while (*s == c)
			s++;
	}
	return (return_split);
}
