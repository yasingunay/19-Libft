/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:18:02 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/14 07:53:58 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <string.h>
*	DESCRIPTION
*	The strlen() function computes the length of the string s.
*	PARAMETERS
*	#1. The string to compute length.
*	RETURN VALUES
*	The strlen() function returns the number of characters that precede the 
*	terminating NUL character.  
*/

#include "libft.h"

size_t	ft_strlen(const char*str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// int main()
// {
// char name[]="yasin";
// printf("%lu\n",ft_strlen(name));
// return (0);
// }
