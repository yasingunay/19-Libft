/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 16:37:13 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/14 11:48:08 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <string.h>
*	DESCRIPTION
*	strlcpy() copies up to dstsize - 1 characters from the string src to dst, 
*	NUL-terminating the result if dstsize is not 0.
*	PARAMETERS
*	#1. The destiny string in which to copy.
*	#2. The source string to copy.
*	#3. The total number of bytes in destiny.
*	RETURN VALUES
*	the strlcpy() function returns the length of the string it tried to create.
//For strlcpy() that means the length of src.
//If the return value is >= dstsize, the output string has been truncated.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_size)

{
	size_t	i;
	size_t	len;

	len = 0;
	while (src[len])
	len++;
	if (dst_size == 0)
		return (len);
	i = 0;
	while (src[i] && i < (dst_size - 1))
	{
	dst[i] = src[i];
	i++;
	}
	dst[i] = '\0';
	return (len);
}

// int main()

// {
// char source[]= "yasin";
// char dest[10];
// int ret;

// ret=ft_strlcpy(dest,source,4);

//  printf("Copied '%s' into '%s', length %d\n",source, dest,ret);

// return (0);
// }
