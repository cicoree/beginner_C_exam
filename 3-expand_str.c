#include <unistd.h>
# define ISBLANK(c) (c == '\t' || c == ' ')

int	main(int argc, char **argv)
{
	int 	i;

	if (argc == 2) // this if block will only execute if there's exactly one string given as argument (argv[1])
	{
	i = 0; //never forget to initialize
	while (ISBLANK(argv[1][i])) //if it starts with a bunch of blanks just ignore those
		i++;
	while (argv[1][i] != '\0')
	{
		if (ISBLANK(argv[1][i])) //now, if the character i is on is blank 
		{
                	if (!ISBLANK(argv[1][i + 1]) && argv[1][i + 1] != '\0') //*AND* the one following one is NOT blank,
                    		write(1, "   ", 3); // replace it with three spaces
            	}        
            	else //otherwise if the character i is on is not blank, just write it
			write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1); // regardless of whether the if statement was executed, we're gonna need to end with a newline
	return (0);
}
