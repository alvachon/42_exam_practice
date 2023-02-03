#include <unistd.h>

void  search_and_replace(char *str, char search, char replace)
{
  while (*str)
  {
    if (*str == search)
      *str = replace;
    write(1, &str[0], 1);
    str++;
  }
}

int main(int ac, char **av)
{
  if (ac == 4 && (!(av[2][1] || av[3][1])))
    search_and_replace(av[1], av[2][0], av[3][0]);
  write(1, "\n", 1);
  return (0);
}
