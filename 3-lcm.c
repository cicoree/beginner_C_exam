unsigned int	lcm(unsigned int a, unsigned int b)
{
	int		min;
	int		lcm;

	if (a == 0 || b == 0)
		return (0);
	min = (a < b) ? a : b;
	while (1)
	{
		if (min % a == 0 && min % b == 0)
		{
			lcm = min;
			break;
		}
		min++;
	}
	return (lcm);
}
