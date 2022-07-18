/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 07:46:51 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/18 08:02:17 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  The bzero() function writes n zeroed bytes to the string s.  
If n is zero, bzero() does nothing.
*/

//void ft_bzero(void *s, size_t n)


#include <stdio.h>
#include <string.h>

int main () {
   char str[50];

   strcpy(str,"yasingunay");
   puts(str);

   memset(str,'$',3);
   puts(str);
   
   return(0);
}