/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:57:48 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/26 00:54:52 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>



int ft_atoi(const char *string)
{
 long result;
 int sign;
 sign = 0;
 result = 0;

 while(*string = '\t' || *string == '\n' || *string == '\v' || *string == '\f' || *string == '\r' || *string == '')
 {
    str++;
 }   

 while(*string == '+' || *string == '-')
 {
    if(*string == '-') {
        sign =  -1;
    }
    string++;
 } 

 while((*string >= '0' && *string <= '9') && *str != '\0')
 {
    digit = *str - '0' //次に入れる数字

    
    //オバーフロー、アンダーフロー対策をここで行う必要がある。
    //ov_div =LONG_MAX / 10 
    //ov_mod = LONG_MAX % 10
    //numがov_divを超えた場合にオーバーフロー判定を行う。

    if (sign == 1 && )
    {

    }

    if (sign == 1 ){
        if (LONG_MAX / 10 < num || (LONG_MAX / 10 == num && LONG_MAX % 10 > *str)) {
            return (int)LONG_MAX;
        }
    }

    if (sign == -1){
        if (LONG_MIN / 10 < num || (LONG_MIN / 10 == num && LONG_MIN % 10 < *str)) {
            return (int)LONG_MIN;
        }
    }
    
    num = 10 * result + (*str - '0');
    str++;
 }

 return (int)num * sign;
}