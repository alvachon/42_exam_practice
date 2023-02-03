
#include <stdio.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
  int i = 0;
  int j;
  
  if (s[i])
  {
    j = 0;
    while (accept[j])
    {
      if (s[i] == accept[j])
      {
        i++;
        j = 0;
      }
      j++;
    }
  }
  return (i);
}

int main()
{
   int len = strspn("42quebec","4123456789q");
   int res = ft_strspn("42quebec","4123456789q");

   printf("Qt of matchset found in string : %d\n", len);
   printf("Qt of matchset found in string : %d\n", res);    
   return(0);
}
