void last_word(char *str)
{
    int j = 0;
    int i = 0;

    while(str[i])
    {
        if (str[i] == ' ' && str[i + 1] >= 33 && str[i + 1] <= 126)
            j = i + 1;
        i++;
    }
    while (st[j] >= 33 && str[j] <= 127)
    {
        write(1, &str[j], 1);
        j++;
    }
}
