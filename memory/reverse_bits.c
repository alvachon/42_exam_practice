#include <unistd.h>
#include <stdio.h>

void  print_bits(unsigned char octet)
{
  int i = 8;
  unsigned char bit;
  
  while (i--)
  {
    bit = (octet >> i & 1) + '0';
    write(1, &bit, 1);
  }
}

unsigned int  reverse_bits(unsigned int octet)
{
    int i = 8 - 1;
    unsigned char tmp = octet;
	     
    octet >>= 1;
    while (octet)
    {
       tmp <<= 1;
	      
       tmp |= octet & 1;
       
       octet >>= 1; 
       
       i--;
    }
    tmp <<= i;
    return tmp;
}
 
int main()
{  
  print_bits(1);
  write(1, "\n", 1);
  print_bits(reverse_bits(1));
  write(1, "\n", 1);
  print_bits(2);
  write(1, "\n", 1);
  print_bits(reverse_bits(2));
  write(1, "\n", 1);
  return (0);
	return 0;
}
