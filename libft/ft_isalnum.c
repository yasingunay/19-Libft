/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 10:54:09 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/12 10:44:37 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 48 && c <= 57) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

// int main()
// {
//     char c;
//     int result;

//     c = '5';
//     result = ft_isalnum(c);
//     printf("When %c is passed, return value is %d\n", c, result);

//     c = 'Q';
//     result = ft_isalnum(c);
//     printf("When %c is passed, return value is %d\n", c, result);

//     c = 'l';
//     result = ft_isalnum(c);
//     printf("When %c is passed, return value is %d\n", c, result);

//     c = '+';
//     result = ft_isalnum(c);
//     printf("When %c is passed, return value is %d\n", c, result);

//     return 0;
// }

// int main()
// {
//     char c;
//     printf("Enter a character: ");
//     scanf("%c", &c);

//     if (ft_isalnum(c) == 0)
//         printf("%c is not an alphanumeric character.", c);
//     else
//         printf("%c is an alphanumeric character.", c); 
//     return 0;
// }

// int	main(void)
// {
// 	int	ret;

// 	ret = ft_isalnum('0');
// 	printf("for '0' return is %d\n", ret);
// 	ret = ft_isalnum('9');
// 	printf("for '9' return is %d\n", ret);
// 	ret = ft_isalnum('a');
// 	printf("for 'a' return is %d\n", ret);
// 	ret = ft_isalnum('z');
// 	printf("for 'z' return is %d\n", ret);
// 	ret = ft_isalnum('A');
// 	printf("for 'A' return is %d\n", ret);
// 	ret = ft_isalnum('Z');
// 	printf("for 'Z' return is %d\n", ret);
// 	ret = ft_isalnum(' ');
// 	printf("for ' ' return is %d\n", ret);
// 	ret = ft_isalnum(')');
// 	printf("for ')' return is %d\n", ret);
// 	return (0);
// }