/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iusantos <iusantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:02:40 by iusantos          #+#    #+#             */
/*   Updated: 2023/08/18 15:49:11 by iusantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		word_start;
	char	**split;

	split = ft_calloc((count_word(s, c) + 1), sizeof(char *));
	if (split == NULL)
		return (0);
	if (!*s)
		return (split);
	i = -1;
	j = 0;
	word_start = -1;
	while (++i < ft_strlen(s) + 1)
	{
		if (s[i] != c && word_start < 0)
			word_start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && word_start >= 0)
		{
			split[j++] = word_dup(s, word_start, i);
			word_start = -1;
		}
	}
	return (split);
}
