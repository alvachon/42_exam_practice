#include <stdio.h>

void  do_op(int n1, char symbol, int n2)
{
  int result = 0;
  if (symbol == '*')
    result = n1 * n2;
  if (symbol == '/')
    result = n1 / n2;
  if (symbol == '%')
    result = n1 % n2;
  if (symbol == '+')
    result = n1 + n2;
  if (symbol == '-')
    result = n1 - n2;
  printf("%d", result);
}

int main(int ac, char **av)
{
  if (ac == 4)
    do_op(atoi(av[1]), av[2][0], atoi(av[3]));
  printf("\n");
}
