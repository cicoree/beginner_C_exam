/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarguer <jmarguer@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 16:57:19 by jmarguer          #+#    #+#             */
/*   Updated: 2019/08/23 17:00:15 by jmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

int	get_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else
		return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	unsigned int 	result = 0;
	int 			sign = 1;
	int 			digit;

	if (*str == '-')
	{
		sign = -1;
		str++;
	}

	while ((digit = get_digit(to_lower(*str))) >= 0)
	{
		result *= str_base;
		result += digit;
		str++;
	}
	return ((int)(result*sign));
}

#if 0
#include <stdio.h>
int	main(void)
{
	char test[] = "FF";
	int	base = 13;
	printf("test: %s\nreal: %d\n", test, ft_atoi_base(test, base));
}
#endif
