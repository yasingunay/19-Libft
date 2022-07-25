/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:13:52 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/25 07:34:37 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <string.h>
*	DESCRIPTION
*	The memmove() function copies len bytes from string src to string dst.  
*	The two strings may overlap; the copy is always done in a nondestructive 
*	manner.
*	PARAMETERS
*	#1. The destiny pointer in which to copy.
*	#2. The source pointer to copy.
*	#3. The number of bytes to copy the source string.
*	RETURN VALUES
*	The memmove() function returns the original value of dst.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*pdst;
	const char	*psrc;

	pdst = dst;
	psrc = src;
	if (dst > src)
		while (len--)
			pdst[len] = psrc[len];
	else if (dst < src)
		ft_memcpy(dst, src, len);
	return (dst);
}

//line 37 check if 'dst' is stored after 'src'
//after line 38 copies the values of 'src' to 'dst' back to front
//line 40 check if 'dst' is stored before 'src'
//after line 41 copies the values of 'src' to 'dst' front to back

// int		main(void)
// {
// 	char	dst[50] = "I am going from Delhi to Gorakhpur";
// 	char	src[50] = "I am going from Delhi to Gorakhpur";
// 	char	*ret;
// 	char	*ret2;
// 	ret = ft_memmove(dst+11, src+5, 29);
// 	ret2 = memmove(dst+11, src+5, 29);
// 	printf("new dest(ft): %s\n", ret);
// 	printf("new dest(or): %s\n", ret2);
// 	return (0);
// }

// https://aticleworld.com/memcpy-vs-memmove/
