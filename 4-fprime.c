#include <stdio.h> // for printf
#include <stdlib.h> // for atoi

int	main(int argc, char **argv)
{
	int	a;
	int	i;
	
	if (argc == 2)
	{
		a = atoi(argv[1]);
		if (a == 1)
			printf("1");
		else 
		{
			i = 2;
			while (i <= a)
			{
				if (a % i == 0)
				{
					printf("%d", i);
					if (i == a)
						break ;	
					printf("*");
					a = a / i;
					i = 1;
				}
				i++;
			}
		}
				
	}
	printf("\n");
	return (0);
}
