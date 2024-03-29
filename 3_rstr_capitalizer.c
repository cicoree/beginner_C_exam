/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 10:07:25 by exam              #+#    #+#             */
/*   Updated: 2019/07/16 11:10:15 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

# define ISBLANK(c) (c == '\t' || c == ' ' || c == '\0')
# define LETTER(c) ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
# define UPPER(c) (c >= 'A' && c <= 'Z')
# define LOWER(c) (c >= 'a' && c <= 'z')

int		main(int argc, char **argv)
{
	int	i;
	int 	j;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			while(argv[i][j])
			{
				if (!LETTER(argv[i][j])) // if it's not a letter just print it
					write(1, &argv[i][j], 1);
				if (LETTER(argv[i][j]) && !ISBLANK(argv[i][j + 1])) // if it is a letter and next one is not blank, make it lowercase
				{	
					if (UPPER(argv[i][j]))
						argv[i][j] = argv[i][j] + 32;
					write(1, &argv[i][j], 1);
				}
				if (LETTER(argv[i][j]) && ISBLANK(argv[i][j + 1])) // if it is a letter and the next one is blank, make it uppercase
				{
					if (LOWER(argv[i][j]))
						argv[i][j] = argv[i][j] - 32;
					write(1, &argv[i][j], 1);
				}
				j++;
			}
			if (i < argc - 1) //only print empty lines between the arguments, not after the last argument
				write(1, "\n", 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
