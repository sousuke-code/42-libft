/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:49:44 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/11/05 18:36:30 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
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

static void	free_memory(char **str, int index)
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

static size_t	count_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static int	word_into_array(char **array, const char *s, char c)
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
			len = count_len(s, c);
			array[i] = malloc(len + 1);
			if (array[i] == NULL)
				return (free_memory(array, i), -1);
			ft_memcpy(array[i], p, len);
			array[i][len] = '\0';
			i++;
			s += len;
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

	if (s == NULL)
		return (NULL);
	ans = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (ans == NULL)
		return (NULL);
	if (word_into_array(ans, s, c) == -1)
		return (NULL);
	return (ans);
}
