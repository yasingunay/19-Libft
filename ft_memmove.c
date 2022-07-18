/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:07:12 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/18 14:50:31 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void	*memmove(void *dst, const void *src, size_t len)
// {




// return (dest)
// }

// #include <stdio.h>
// #include <string.h>

// int main () {
//    char dest[] = "oldstring";
//    const char src[]  = "newstring";

//    printf("Before memmove dest = %s, src = %s\n", dest, src);
//    memmove(dest, src, 9);
//    printf("After memmove dest = %s, src = %s\n", dest, src);

//    return(0);
// }

#include string.h, stdio.h, stdlib.h
int main(){
  char a[]="hare rama hare rama";

  char b[]="hare rama hare rama";

  memmove(a+5,a,20);
  puts(a);

  memcpy(b+5,b,20);
  puts(b);
}