/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:00:37 by sosmiyat          #+#    #+#             */
/*   Updated: 2024/11/05 17:46:53 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ans;
	unsigned int	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen((char *)s);
	if (start >= s_len || len == 0)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	ans = malloc(len + 1);
	if (ans == NULL)
		return (NULL);
	ft_memcpy(ans, s + start, len);
	ans[len] = '\0';
	return (ans);
}
