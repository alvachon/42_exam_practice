#include <unistd.h>

void print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bit;

    while (i--)
    {
        bit = (octet >> i & 1) + '0';
        write(1, &bit, 1);
    }
}

int main()
{
  print_bits(0);
  write(1, "\n", 1);
  print_bits(1);
  write(1, "\n", 1);
  print_bits(2);
  write(1, "\n", 1);
  print_bits(3);
  write(1, "\n", 1);
  print_bits(255);
  write(1, "\n", 1);
  return (0);
}

