//#include <stdio.h>
//#include <string.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i = 0;
    while (s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}

/*int main()
{
  char src[40];
  char dst[100];
  char src1[40];
  char dst1[100];
  
  memset(dst, '\0', sizeof(dst));
  strcpy(src, "Hello World");
  strcpy(dst, src);
  printf("Final copied string : %s\n", dst);
  
  memset(dst1, '\0', sizeof(dst1));
  ft_strcpy(src1, "Hello World");
  ft_strcpy(dst1, src1);
  printf("Final copied string : %s\n", dst1);
  return (0);
}*/
