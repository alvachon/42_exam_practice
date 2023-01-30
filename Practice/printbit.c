void printbit(char *octet)
{
    int i = 8;
    unsigned char *bit;

    while (i--)
    {
        bit = (octet >> i & 1) + '0';
        write(1, &bit, 1);
    }
}

unsigned int reversebit(unsigned int octet)
{
    int i = 8 - 1;
    unsigned char tmp = octet;

    octet >> 1;
    while (octet)
    {
        tmp <<= 1;
        tmp |= octet & 1;
        octet >>= 1;
        i--;
    }
    tmp <<= i;
    return (tmp);
}

