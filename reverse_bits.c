/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvachon <alvachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 12:39:23 by alvachon          #+#    #+#             */
/*   Updated: 2022/11/18 10:56:58 by alvachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_bits_bitwise(unsigned char octet)
{
	int	i = 8;
	unsigned char bit;

	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

//bit reversal function
unsigned int	ReverseTheBits(unsigned int octet)
{
    int i = 8 - 1;
    unsigned char tmp = octet;
	     
    octet >>= 1;
    while (octet)
    {
       tmp <<= 1;
	      
       tmp |= octet & 1; // putting the set bits of num
       
       octet >>= 1; 
       
       i--;
    }
    tmp <<= i;
    return tmp;
}
 
int main()
{
    unsigned int data = 0;
    unsigned int Ret = 0;
    
    printf("Enter the number : ");
    scanf("%u",&data);
    
    printf("Entered Data:");
    printf("\n");
    print_bits_bitwise(data);
    printf("\n");
    printf("\n");
    Ret = ReverseTheBits(data);
    printf("Reverse Data:");
    printf("\n");
    print_bits_bitwise(Ret);
    printf("\n");
    printf("\n");
	return 0;
}
