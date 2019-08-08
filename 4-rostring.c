#include <unistd.h>

# define ISBLANK(c) (c == ' ' || c == '\t' || c == '\n')

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rostring(char *str)
{
	int i;
	int start;
	int end;
	int flag;

	i = 0;
	while (str[i] && ISBLANK(str[i]))
		i++; //ignore empty spaces in the front
	start = i; // start = first char of the first word
	while (str[i] && !ISBLANK(str[i]))
		i++;
	end = i; // end = last char of the first word
	while (str[i])
	{
		while (str[i] && ISBLANK(str[i]))
			i++; // moving to the next word
		while (str[i] && !ISBLANK(str[i])) // as long as we are in a word, write that word
		{
			ft_putchar(str[i]); 
			i++; 
			flag = 1;
		}
		if (flag == 1)
		{
			ft_putchar(' '); // print a space but only if you just printed a word
			flag = 0;
		} 
	}
	while (start < end) // now finish by writing the first word at the end
	{
		ft_putchar(str[start]); // location of first word being is between start and end
		start++;
	}
}

int		main(int argc, char **argv)
{
	if (argc > 1)
	{
		rostring(argv[1]);
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
