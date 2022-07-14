/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 07:58:34 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/14 07:53:11 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <ctype.h>
*	DESCRIPTION
*	The isprint() function tests for any printing character, 
*	including space (' '). The value of the argument must be representable as an 
*	unsigned char or the value of EOF.
*	PARAMETERS
*	#1. The character to test.
*	RETURN VALUES
*	The isprint() function returns zero if the character tests false and returns 
*	non-zero if the character tests true.
*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 0 && c <= 31)
	{
		return (0);
	}
	else
		return (1);
}

// int main()

// {

// int result;

// result= ft_isprint('\n');
// printf("%d\n",result);

// result= ft_isprint(' ');
// printf("%d\n",result);

// result= ft_isprint('a');
// printf("%d\n",result);

// result= ft_isprint('9');
// printf("%d\n",result);
// }