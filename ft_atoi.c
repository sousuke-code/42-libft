/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:57:48 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/10/31 10:53:19 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "libft.h"



int ft_atoi(const char *string)
{
 long long result;
 int  sign;
 int digit;
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

 while(*string >= '0' && *string <= '9')
 {

    
    //オバーフロー、アンダーフロー対策をここで行う必要がある。
    //ov_div =LONG_MAX / 10 
    //ov_mod = LONG_MAX % 10
    //numがov_divを超えた場合にオーバーフロー判定を行う。
    digit = *string - '0';

             // 正のオーバーフローのチェック
        if (sign == 1 && (result > LONG_MAX / 10 ||
            (result == LONG_MAX / 10 && digit > LONG_MAX % 10))) {
            return (int)LONG_MAX;
        }

        // 負のオーバーフローのチェック
        if (sign == -1 && (result > LONG_MAX / 10 ||
            (result == LONG_MAX / 10 && digit > LONG_MAX % 10))) {
            return (int)LONG_MIN;
        }
    result = 10 * result + digit;
    string++;
 }
 return (int)(result * sign);
}

void run_test(const char *test_str, long expected) {
    long result = ft_atoi(test_str);
    printf("Input: \"%s\"\n", test_str);
    printf("Expected: %ld, Result: %ld\n", expected, result);
}

int main() {
    run_test("2147483647", 2147483647L); // INT_MAX
    run_test("-2147483648", -2147483648L); // INT_MIN
    run_test("9223372036854775807", LONG_MAX); // LONG_MAX
    run_test("-9223372036854775808", LONG_MIN); // LONG_MIN
    run_test("9223372036854775808", LONG_MAX); // Overflow
    run_test("-9223372036854775809", LONG_MIN); // Underflow

    // 追加のテストケース
    run_test("-123", -123L);

    // 先頭に空白がある数値
    run_test("\t\n  -123", -123L);

    // 無効な文字が含まれている
    run_test("123abc", 123L);

    return 0;
}