// check for matching character

#include <stdio.h>
#include <string.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
  int j;
  
  while (*s1)
  {
    j = 0;
    while (s2[j])
    {
      if (*s1 == s2[j])
        return ((char *)s1);
      j++;
    }
    s1++;
  }
  return (NULL);
}

int main(void)
{
  char *str1 = "awsrtg94";
  char *str2 = "dr3";
  char *s1 = "awsrtg94";
  char *s2 = "dr3";
  char *ret;
  
  ret = strpbrk(s1, s2);
  printf("%c\n", *ret);
  printf("%c\n", *ft_strpbrk(str1, str2));
  return (0);
}
