#include <unistd.h>
# define ISBLANK(c) (c == '\t' || c == ' ')

int	main(int argc, char **argv)
{
	int 	i;

	if (argc == 2)
	{
	i = 0;
	while (ISBLANK(argv[1][i]))
		i++;
	while (argv[1][i] != '\0')	
		{
			if (ISBLANK(argv[1][i]))
			{
                if (!ISBLANK(argv[1][i + 1]) && argv[1][i + 1] != '\0')
                    write(1, "   ", 3);
            }        
            else if (!ISBLANK(argv[1][i]))
				write(1, &argv[1][i], 1);
            i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
