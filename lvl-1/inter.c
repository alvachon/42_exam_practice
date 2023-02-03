#include <unistd.h>

void  inter(char *str1, char *str2)
{
  int tab[256] = {0};
  int i = 0;
  int j;
  while (str1[i])
  {
    j = 0;
    while (str2[j])
    {
      if (str2[j] == str1[i] && tab[(int)str1[i]] == 0)
      {
        tab[(int)str1[i]] = 1;
        write(1, &str2[j], 1);
      }
      j++;
    }
    i++;
  }
}

int main(int ac, char **av)
{
  if (ac == 3)
    inter(av[1], av[2]);
  write(1, "\n", 1);
  return (0);
}



