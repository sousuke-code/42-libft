/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyatasoujo <miyatasoujo@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 22:13:07 by miyatasoujo       #+#    #+#             */
/*   Updated: 2024/11/03 00:16:06 by miyatasoujo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"


int count_words (char const *s, char c)
{
    int head_word_count;
    int i;
    head_word_count = 0;
    i = 0;
    if (c == '\0')
      return 1;
    while(*s) {
       if (*s != c && head_word_count == 0) {
         head_word_count = 1;
         i++;
       }else if ( *s == c){
        head_word_count = 0;
       }
       s++;
    }
    return i;
}

void free_memory(char **str, int index)
{
  int i;
  i = 0;
  while(i < index)
  {
    free(str[i]);
    i++;
  }
  free(str);
}




char **ft_split(char const *s, char c)
{
    char **ans;
    int words_counts;
    size_t i;
    size_t len;
    i = 0;
    words_counts = count_words(s,c);
    
    ans = malloc((words_counts+1) * sizeof(char *));
    if (ans == NULL)
      return NULL;

    while(*s) {
        
        if (*s != c) {
            char const *p = s;
            len = 0;
            while(*s && *s != c) {

                len++;
                s++;
            }
            ans[i] = malloc(len+1);
            if (ans[i] == NULL){
               free_memory(ans, i);
               return  NULL;
            }
            ft_memcpy(ans[i],p,len);
            ans[i][len] = '\0';
            i++;
        }
        s++;
    }
    ans[i] = NULL;

    return ans;
}
