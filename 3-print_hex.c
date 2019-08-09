/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarguer <jmarguer@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/09 13:17:25 by jmarguer          #+#    #+#             */
/*   Updated: 2019/08/09 13:40:43 by jmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	int		i;
	int		res;

	i = 0;
	res = 0; // note we don't care about sign because the input will be zero or positive

	while (str[i] && (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
			i++;
	if (str[i] == '+') // extra precaution in case there's a useless plus sign in front of the digits
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}

void	print_hex(int	n)
{
	if (n >= 16)
		print_hex(n / 16);
	n = n % 16; // get the remainder of a division by 16
	if (n < 10)
		n = n + '0'; // if the remainder is btw 0 and 9, just write it
	else
		n = 'a'+ (n - 10); // if the remainder is btw 10 and 15, it should be transcribed as a,b,c,d,e,f
	write(1, &n, 1);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
