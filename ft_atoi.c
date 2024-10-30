/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:57:48 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/29 10:07:16 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "libft.h"



int ft_atoi(const char *string)
{
 long result;
 int sign;
 sign = 1;
 result = 0;

 while(*string == '\t' || *string == '\n' || *string == '\v' || *string == '\f' || *string == '\r' || *string == ' ')
 {
    string++;
 }   

 while(*string == '+' || *string == '-')
 {
    if(*string == '-') {
        sign =  -1;
    }
    string++;
 } 

 while((*string >= '0' && *string <= '9') && *string != '\0')
 {

    
    //オバーフロー、アンダーフロー対策をここで行う必要がある。
    //ov_div =LONG_MAX / 10 
    //ov_mod = LONG_MAX % 10
    //numがov_divを超えた場合にオーバーフロー判定を行う。


    if (sign == 1 ){
        if ( LONG_MAX / 10 < result || (LONG_MAX / 10 == result && LONG_MAX % 10 > *string)) {
            return (int)LONG_MAX;
        }
    }

    if (sign == -1){
        if (LONG_MIN / 10 > result || (LONG_MIN / 10 == result && LONG_MIN % 10 < *string)) {
            return (int)LONG_MIN;
        }
    }
    
    result = 10 * result + (*string - '0');
    string++;
 }
 return (int)(result * sign);
}