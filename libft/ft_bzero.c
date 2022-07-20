/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 07:46:51 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/20 12:26:08 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  The bzero() function writes n zeroed bytes to the string s.  
If n is zero, bzero() does nothing.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

i = 0;
str = (char *)s;
	while (i < n)
	{
	str[i] = 0;
	i ++;
	}
}

// int main () {
//    char str[]="yasingunay";

//   bzero(str+3,3);
// printf("%s",str);   
//    return(0);
// }
