/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarguer <jmarguer@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 12:08:31 by jmarguer          #+#    #+#             */
/*   Updated: 2019/08/27 15:17:44 by jmarguer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define OPEN(c) (c == '(' || c == '{' || c == '[')
#define CLOSE(c) (c == ')' || c == '}' || c == ']')
#define MATCH(a, b) ((a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}'))

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	brackets(char *str)
{
	int	i;
	int	top;
	char	stack[ft_strlen(str)];

	i = 0;
	top = 0;
	while (str[i])
	{
		if (OPEN(str[i]))
		{
			top++;
			stack[top] = str[i];
		}
		else if (CLOSE(str[i]))
		{
			if (MATCH(stack[top], str[i]))
				top--;
			else
				return (0);
		}
		i++;
	}
	return (top == 0);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			if (brackets(argv[i]))
				write(1, "OK\n", 3);
			else
				write(1, "Error\n", 6);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
