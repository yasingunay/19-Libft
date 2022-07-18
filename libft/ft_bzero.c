/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 07:46:51 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/18 11:05:42 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
  The bzero() function writes n zeroed bytes to the string s.  
If n is zero, bzero() does nothing.
*/

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	int				i;
	unsigned char	*str;

i = 0;
str = (unsigned char *)s;
	while (i < n)
	{
	str[i] = '0';
	i ++;
	}
	return (s);
}

// int main () {
//    char str[15];

//    strcpy(str,"yasingunay");
//    puts(str);

//    ft_bzero(str,3);
//    puts(str);
//    return(0);
// }
