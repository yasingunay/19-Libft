/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 16:12:30 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/06 17:21:48 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

// int	main(void)
// {
// 	int	ret;

// 	ret = ft_isalpha('A');
// 	printf("return is %d\n", ret);
// 	ret = ft_isalpha('Z');
// 	printf("return is %d\n", ret);
// 	ret = ft_isalpha('a');
// 	printf("return is %d\n", ret);
// 	ret = ft_isalpha('z');
// 	printf("return is %d\n", ret);
// 	ret = ft_isalpha('1');
// 	printf("return is %d\n", ret);
// 	ret = ft_isalpha(' ');
// 	printf("return is %d\n", ret);
// 	return (0);
// }

// int main()
// {
//     char c; 
//     printf("Enter a character: ");
//     scanf("%c", &c);

//     if (ft_isalpha(c) == 0)
//          printf("%c is not an alphabet.", c);
//     else
//          printf("%c is an alphabet.", c);

//     return 0;
// }