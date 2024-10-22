/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:15:31 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/22 21:23:29 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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