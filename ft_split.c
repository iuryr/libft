/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iusantos <iusantos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:02:40 by iusantos          #+#    #+#             */
/*   Updated: 2023/05/24 15:01:39 by iusantos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *s, char c)
{
	int	trigger;
	int	counter;

	trigger = 0;
	counter = 0;
	while (*s != '\0')
	{
		if (*s != c && trigger == 0)
		{
			counter++;
			trigger = 1;
		}
		if (*s == c)
			trigger = 0;
		s++;
	}
	return (counter);
}

static char	*word_dup(const char *str, size_t start, size_t end)
{
	char	*word;
	size_t	i;

	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (0);
	i = 0;
	while (i < end - start)
	{
		word[i] = str[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

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
