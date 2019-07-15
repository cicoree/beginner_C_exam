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
	/* The trick with this problem is how to cut off everything after the last non blank char (ie. don't
	** print three spaces at the end). This is why we must START with the non blank. Imagine there is a space
	** dangling at the end of our string. So we want to check, is there any non-blank char after that space?
	** If yes, then we will transform that last space before the char into three spaces, but if NOT, we will ignore it
	*/
			if (ISBLANK(argv[1][i])) //now, if the character i is on is blank 
			{
                		if (!ISBLANK(argv[1][i + 1]) && argv[1][i + 1] != '\0') //*AND* the one following one is NOT blank,
                    			write(1, "   ", 3); // replace it with three spaces
            		}        
            		else //otherwise if argv[1][i] is not blank, just write it
				write(1, &argv[1][i], 1);
			i++;
		}
	}	
	write(1, "\n", 1); // regardless of whether the if statement was executed, we're gonna need to end with a newline
	return (0);
}
