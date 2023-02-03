#include <unistd.h>

//Learn how to swipe min and maj in ascii.

void  ulstr(char *str)
{
  while (*str)
  {
    if (*str >= 'A' && *str <= 'Z')
      *str += ' ';
    else if (*str >= 'a' && *str <= 'z')
      *str -= ' ';
    write(1, &str[0], 1);
    str++;
  }
}

int main(int ac, char **av)
{
  if (ac == 2)
    ulstr(av[1]);
  write(1, "\n", 1);
  return (0);
}
