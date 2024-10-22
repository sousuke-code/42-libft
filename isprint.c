/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:24:25 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/22 21:28:16 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
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

    int c = 'A';
    printf("%d", ft_isprint(c));
    
}