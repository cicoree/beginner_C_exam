int   is_power_of_2(unsigned int n)
{
  if (n == 0)
    return (0); // don't forget this as zero is not a power of 2!
  else 
    return (!(n & n - 1));
}
