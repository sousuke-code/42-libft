/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:08:12 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/27 15:53:09 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "libft.h"

int ft_isalnum(char c)
{
    if ((c >= 'a' && c <= 'z' )|| (c >= 'A' && c <= 'Z') || (c >= '0' && c < '9'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    char c = '8';
    printf("%d", ft_isalnum(c));
}
