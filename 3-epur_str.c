/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 11:21:52 by exam              #+#    #+#             */
/*   Updated: 2019/07/16 11:38:27 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

# define ISBLANK(c) (c == ' ' || c == '\t')

int		main(int argc, char **argv)
{
	int		i;

	if (argc == 2)
	{
		i = 0;
		while (ISBLANK(argv[1][i]))
			i++;
		while (argv[1][i] != '\0')
		{
			if (!ISBLANK(argv[1][i]))
				write(1, &argv[1][i], 1);
			if (ISBLANK(argv[1][i]) && !ISBLANK(argv[1][i + 1]) && argv[1][i + 1] != '\0')
				write(1, " ", 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
