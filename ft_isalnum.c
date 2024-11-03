/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:08:12 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/11/03 00:20:05 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "libft.h"

int ft_isalnum(int c)
{
    if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


