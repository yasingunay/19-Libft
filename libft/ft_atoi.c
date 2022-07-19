/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 07:14:58 by ygunay            #+#    #+#             */
/*   Updated: 2022/07/19 07:56:31 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
     The atoi() function converts the initial portion of the string pointed to
     by str to int representation.

     It is equivalent to:

           (int)strtol(str, (char **)NULL, 10);

     While the atoi() function uses the current locale, the atoi_l() function
     may be passed a locale directly. See xlocale(3) for more information.

Return Value
This function returns the converted integral number as an int value. 
If no valid conversion could be performed, it returns zero.
*/

#include "libft.h"

int	ft_atoi(const char *str)
{

int res;
int sign;
int i;

res=0;
sign =1;
i =0;

if (str[0]=='-')
{
	sign=-1;
	i++;
}


while (str[i]!='\0')
{
	res= res*10 + str[i]-'0';
	i++;
}

return (sign*res);

}


// int main()
// {

// char str1[]="1234";
// int val= ft_atoi(str1);
// printf("%d",val);
// return (0);

// }

	int	main(void)
{
	char	str[] = "  \t--+-+0234ab567";
	char	str2[] = "  --+-+\v0234ab567";
	char	str3[] = "  ---+-+50234ab567";
	char	str4[] = "1234ab567";
	char	str5[] = "+-54";
	char	str6[] = "-+48";
	char	str7[] = "--47";
	char	str8[] = "++47";
	char	str9[] = "234567890111";
	char	str10[] = "500000000000000000";
	char	str11[] = "50000000000000000000000";
	char	str12[] = "-500000000000000000000000000000000000000000";
	char	str13[] = "-9223372036854775807";
	int		ret;
	int		ret2;

	ret = ft_atoi("  \t--+-+0234ab567");
	printf("FT: Test 1 %s\n%d\n", str, ret);
	ret2 = atoi("  \t--+-+0234ab567");
	printf("OR: Test 1 %s\n%d\n", str, ret2);
	ret = ft_atoi("  --+-+\v0234ab567");
	printf("FT: Test 2 %s\n%d\n", str2, ret);
	ret2 = atoi("  --+-+\v0234ab567");
	printf("OR: Test 2 %s\n%d\n", str2, ret2);
	ret = ft_atoi("  ---+-+50234ab567");
	printf("Test 3 %s\n%d\n", str3, ret);
	ret = ft_atoi("1234ab567");
	printf("Test 4 %s\n%d\n", str4, ret);
	ret = ft_atoi("+-54");
	printf("FR: Test 5 %s\n%d\n", str5, ret);
	ret2 = atoi("+-54");
	printf("OR: Test 5 %s\n%d\n", str5, ret2);
	ret = ft_atoi("-+48");
	printf("FT: Test 6 %s\n%d\n", str6, ret);
	ret2 = atoi("-+48");
	printf("OR: Test 6 %s\n%d\n", str6, ret2);
	ret = ft_atoi("--47");
	printf("FT: Test 7 %s\n%d\n", str7, ret);
	ret2 = atoi("--47");
	printf("OR: Test 7 %s\n%d\n", str7, ret2);
	ret = ft_atoi("++47");
	printf("FT: Test 8 %s\n%d\n", str8, ret);
	ret2 = atoi("++47");
	printf("OR: Test 8 %s\n%d\n", str8, ret2);
	ret = ft_atoi("-234567890111");
	printf("FT: Test 9 %s\n%d\n", str9, ret);
	ret2 = atoi("-234567890111");
	printf("OR: Test 9 %s\n%d\n", str9, ret2);
	ret = ft_atoi("500000000000000000");
	printf("FT: Test 10 %s\n%d\n", str10, ret);
	ret2 = atoi("500000000000000000");
	printf("OR: Test 10 %s\n%d\n", str10, ret2);
	ret = ft_atoi("50000000000000000000000");
	printf("FT: Test 11 %s\n%d\n", str11, ret);
	ret2 = atoi("50000000000000000000000");
	printf("OR: Test 11 %s\n%d\n", str11, ret2);
	ret = ft_atoi("-500000000000000000000000000000000000000000");
	printf("FT: Test 12 %s\n%d\n", str12, ret);
	ret2 = atoi("-500000000000000000000000000000000000000000");
	printf("OR: Test 12 %s\n%d\n", str12, ret2);
	ret = ft_atoi("-9223372036854775807");
	printf("FT: Test 13 %s\n%d\n", str13, ret);
	ret2 = atoi("-9223372036854775807");
	printf("OR: Test 13 %s\n%d\n", str13, ret2);
	return (0);
}