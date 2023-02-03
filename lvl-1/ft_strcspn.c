
#include <stdio.h>
#include <string.h>

//Length of initial segment matching

size_t	ft_strcspn(const char *s, const char *reject)
{
  size_t i = 0;
  size_t j;
  
  while (s[i])
  {
    j = 0;
    while (reject[j])
    {
      if (s[i] == reject[j])
        return (i);
      j++;
    }
    i++;
  }
  return (i);
}

int main()
{
   int len = strcspn("Hell0","012345");
   int res = ft_strcspn("Hell0","012345");

   printf("Qt before matchset target in string: %d\n", len);
   printf("Qt before matchset target in string: %d\n", res);    
   return(0);
}
