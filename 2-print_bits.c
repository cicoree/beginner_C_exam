#include <unistd.h>

void    print_bits(unsigned char octet)
{
  int i;
  
  i = 128;
  while (i)
  {
    (octet & i) ? write(1, "1", 1) : write(1, "0", 1); // is there a 1 in that spot in our octet?
    i = i >> 1; // move the 1 one position to the right to check for next slot. This is same as i = i/2
  }
} 
