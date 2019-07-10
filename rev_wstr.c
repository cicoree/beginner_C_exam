/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 10:13:45 by exam              #+#    #+#             */
/*   Updated: 2019/07/09 11:36:12 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;
	int 	j;
	int		len;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
			i++;
		len = i;
		while (i >= 0)
		{
			while (i >= 0 && argv[1][i] != ' ' && argv[1][i] != '\t')
				i--;
			j = i + 1;
			while (argv[1][j] != ' ' && argv[1][j] != '\t' && j < len)
			{
				write(1, &argv[1][j], 1);
				j++;
			}
			if (i > 0)
				write(1, " ", 1);
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
