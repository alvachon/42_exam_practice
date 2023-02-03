char **ft_split(char *s, char c)
{
    char **str;
    size_t index = 0;
    size_t len_str = 0;
    size_t len start;

    str = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
    if (str && s)
    {
        while (index < ft_wordcount(s, c) && s[len_str] != '\0')
        {
            while (s[len_str] == c)
                len_str++;
            len_start = len_str;
            while (s[len_str] != c && c[len_str] != '\0')
                len_str++;
            str_array[index] = ft_strndup(&s[len_start], len_str - len_start);
            if (str_array[index++] == 0)
                return (ft_freeall(str_array));

    }
    return (NULL);
}

