/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:40:46 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/14 15:58:31 by ygunay           ###   ########.fr       */
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
//For strlcat() that means the initial length of dst plus the length of src.
//If the return value is >= dstsize, the output string has been truncated.
*/

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	i=0;
	while (*dst)
	{
		i++;
	}
	

j=0;
	while (strlen(dst)+1 < dstsize && src[j]!= '\0')
	{
	dst[i] = src[j];
	i++;
	j++;
	}

dst[i] = '\0';

	return (strlen(dst)+strlen(src) );
}





// size_t	ft_strlcat(char *dest, const char *src, size_t size)
// {
// 	size_t	dsize;
// 	size_t	i;

// 	dsize = 0;
// 	i = 0;
// 	while (dest[dsize] && dsize < size)
// 		dsize++;
// 	while (src[i] && dsize + i + 1 < size)
// 	{
// 		dest[dsize + i] = src[i];
// 		i++;
// 	}
// 	if (dsize != size)
// 		dest[dsize + i] = '\0';
// 	return ((size_t)strlen(src) + dsize);
// }


int main () {
   char s1[50] = "This is s1. ";
  char s2[50] = "This is s2.";
   ft_strlcat(s1, s2, 15);
  printf("Final string : %s\n", s1);
  return(0); }
