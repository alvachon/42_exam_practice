void expand_str(char *s)
{
    int i = -1;
    while (*s)
    {
        while (*s && (*s == ' ' || *s == '\t' || *s == '\n')
                s++;
            if ( *s && i != -1)
                write(1, "  ", 3);
            i = 0;
            while (s[i] && s[i] != ' ' && s[i] != '\t\ && s[i] != \n)
                i++;

