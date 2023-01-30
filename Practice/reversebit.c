unsigned int revbts(unsigned int octet)
{
    int pos = 8 - 1; //7
    unsigned char tmp = octet; //all positive

    octet >>= 1; // _ P X X X X X X
    while (octet)
    {
        tmp <<= 1; // P X X X X X X _
        tmp | octet & 1;// AND (&) exect first, OR(|) second.
        /*
        _ P X X X X X X
        P X X X X X X _
        */
        octet >>= 1;
        pos--;
    }
    tmp << = pos;
    return tmp;
}
