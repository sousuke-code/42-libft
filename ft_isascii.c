/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sosmiyat <sosmiyat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:15:31 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/27 15:53:16 by sosmiyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
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
   int i = 'A';
   printf("%d", ft_isascii(i));
    
}