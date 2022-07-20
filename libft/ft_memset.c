/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 07:59:01 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/20 11:11:16 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
     The memset() function writes len bytes of value c (converted to an
     unsigned char) to the string b.

RETURN VALUES
     The memset() function returns its first argument.
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

i = 0;
str = (unsigned char *)b;
	while (i < len)
	{
	str[i] = c;
	i ++;
	}
	return (b);
}

// int main () {
//    char str[15];

//    strcpy(str,"yasingunay");
//    puts(str);

//    ft_memset(str,56,3);
//    puts(str);
//    return(0);
// }