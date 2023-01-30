char *ft_strcpy(char *str)
{
    int len = ft_len(str);
    char *copy;

     copy = malloc(sizeof(char) * len + 1);
     if (!str)
         return (NULL);
     while (str[i])
    {
        copy[i] = str[i];
        i++;
    }
     copy[i] = '\0';
     return (str);
}
