/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:46:22 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/25 17:48:05 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <string.h>
*	DESCRIPTION
*	strlcat() appends string src to the end of dst.  It will append at most 
*	dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless 
*	dstsize is 0 or the original dst string was longer than dstsize (in practice 
*	this should not happen as it means that either dstsize is incorrect or that 
*	dst is not a proper string).
*	PARAMETERS
*	#1. The destiny string in which to concatenate.
*	#2. The source string to concatenate.
*	#3. The total number of bytes in destiny.
*	RETURN VALUES
*	the strlcat() function returns the length of the string it tried to create.
*/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	d;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] != 0 && c + 1 < dstsize)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = 0;
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}

// int main()
// {
//     char first[] = "yasin";
//     char last[] = "gunay123";
//     int r;
//     int size = 4;
//     char buffer[size];

//     strcpy(buffer,first);
//     r = ft_strlcat(buffer,last,size);

//     puts(buffer);
//     printf("Value returned: %d\n",r);
//     if( r > size )
//         puts("String truncated");
//     else
//         puts("String was fully copied");

// 	printf("%s\n",buffer);

//     return(0);
// }