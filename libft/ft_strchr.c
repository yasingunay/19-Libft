/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 09:44:47 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/15 10:54:11 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*DESCRIPTION
     The strchr() function locates the first occurrence of c (converted to a
     char) in the string pointed to by s.  The terminating null character is
     considered to be part of the string; therefore if c is `\0', the func-
     tions locate the terminating `\0'.

RETURN VALUES
     The functions strchr() and strrchr() return a pointer to the located
     character, or NULL if the character does not appear in the string.*/

#include "libft.h"

char	*strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (s[i] == c)
		{
			return ((char *)(s + i));
		}
	i++;
	}
	return (NULL);
}

// int main () {
//    const char str[] = "yasin.gunay.123";
//    const char ch = '.';
//    char *ret;

//    ret = strchr(str, ch);

//    printf("String after |%c| is - |%s|\n", ch, ret);
//    return(0);
// }