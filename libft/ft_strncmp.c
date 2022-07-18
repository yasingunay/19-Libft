/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:08:53 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/18 16:08:21 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
     The strcmp() and strncmp() functions lexicographically compare the null-
     terminated strings s1 and s2.

     The strncmp() function compares not more than n characters.  Because
     strncmp() is designed for comparing strings rather than binary data,
     characters that appear after a `\0' character are not compared.

RETURN VALUES
     The strcmp() and strncmp() functions return an integer greater than,
     equal to, or less than 0, according as the string s1 is greater than,
     equal to, or less than the string s2.  The comparison is done using
     unsigned characters, so that `\200' is greater than `\0'.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("TEST 1\n");
// 	printf("ret(ft) is %d\n", ft_strncmp("salut", "salut", 5));
// 	printf("ret(or) is %d\n", strncmp("salut", "salut", 5));
// 	printf("TEST 2\n");
// 	printf("ret(ft) is %d\n", ft_strncmp("test", "testss", 7));
// 	printf("ret(or) is %d\n", strncmp("test", "testss", 7));
// 	printf("TEST 3\n");
// 	printf("ret(ft) is %d\n", ft_strncmp("testss", "test", 7));
// 	printf("ret(or) is %d\n", strncmp("testss", "test", 7));
// 	printf("TEST 4\n");
// 	printf("ret(ft) is %d\n", ft_strncmp("abcdefgh", "abcdwxyz", 4));
// 	printf("ret(or) is %d\n", strncmp("abcdefgh", "abcdwxyz", 4));
// 	printf("TEST 5\n");
// 	printf("ret(ft) is %d\n", ft_strncmp("zyxbcdefgh", "abcdwxyz", 0));
// 	printf("ret(or) is %d\n", strncmp("zyxbcdefgh", "abcdwxyz", 0));
// 	printf("TEST 6\n");
// 	printf("ret(ft) is %d\n", ft_strncmp("abcdefgh", "", 0));
// 	printf("ret(or) is %d\n", strncmp("abcdefgh", "", 0));
// 	printf("TEST 7\n");
// 	printf("ret(ft) is %d\n", ft_strncmp("test\200", "test\0", 6));
// 	printf("ret(or) is %d\n", strncmp("test\200", "test\0", 6));

// 	return (0);
// }