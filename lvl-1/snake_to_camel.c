
#define STR av[1][i]

#include <unistd.h>

void  snake_to_camel(char *str)
{
  while (*str)
  {
    if (*str == '_')
    {
      str++;
      *str -= ' ';
    }
    write(1, &str[0], 1);
    str++;
  }
}

int main(int ac, char **av)
{
  if (ac == 2)
    snake_to_camel(av[1]);
  write(1, "\n", 1);
}
