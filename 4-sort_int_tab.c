// traditional bubble sort but avoids nested while loops
void    sort_int_tab(int *tab, unsigned int size)
{
	unsigned int		i; // must be of same data type as size param since they're going to be compared
	int	            	temp;
	
	i = 0;
	while (i < (size - 1)) // this is because in the last case we want to check tab[n-1] vs tab[n], beyond that is nothing
	{	
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0; // reset to i counter to zero if swap had to be made
		}
		else
			i++; // otherwise keep traversing the array until you find another badly sorted pair
	}
}

// Main for testing only: 
/*
int		main(void)
{
	int tab[6] = {9, 7, 6, 4, 5, 10};
	int i = 0;
	int size = 6;

	sort_int_tab(tab, size);
	while (i < size)
		printf("%d ", tab[i++]);
	return (0);
}
*/
