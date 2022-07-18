/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:44:06 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/18 17:58:33 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
     The memchr() function locates the first occurrence of c (converted to an
     unsigned char) in string s.

RETURN VALUES
     The memchr() function returns a pointer to the byte located, or NULL if
     no such byte exists within n bytes.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	x;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	x = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == x)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}

// int main () 
// {
// 	const char str[] = "yasin.gunay.123";
// 	const char ch = '.';
// 	char *ret1;
// 	char *ret2;

// 	ret1 = ft_memchr(str, ch, 3);
// 	ret2 = memchr(str, ch,3);

// 	printf("String after |%c| is - |%s|\n", ch, ret1);
//  	printf("String after |%c| is - |%s|\n", ch, ret2);

// 	return(0);
// }
