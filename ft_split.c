/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 22:13:07 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/11/04 11:54:09 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	count_words(char const *s, char c)
{
	int	head_word_count;
	int	i;

	head_word_count = 0;
	i = 0;
	if (c == '\0')
		return (1);
	while (*s)
	{
		if (*s != c && head_word_count == 0)
		{
			head_word_count = 1;
			i++;
		}
		else if (*s == c)
		{
			head_word_count = 0;
		}
		s++;
	}
	return (i);
}

void	free_memory(char **str, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static int	word_into_arry(char **array, const char *s, char c)
{
	size_t		len;
	size_t		i;
	char const	*p;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			p = s;
			len = 0;
			while (*s && *s != c)
			{
				len++;
			    s++;
			}
			array[i] = malloc(len + 1);
			if (array[i] == NULL)
				return (free_memory(array, i), -1);
			ft_memcpy(array[i], p, len);
			array[i][len] = '\0';
			i++;
		}
		else
			s++;
	}
	array[i] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**ans;

	ans = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (ans == NULL)
		return (NULL);
	if (word_into_arry(ans, s, c) == -1)
		return (NULL);
	return (ans);
}
