#include <string.h>
 
// Sum Luhn
int SumLuhnAlgo(
    const char * number
)
{
    //
    int  digits  = 0;
    int  i     = strlen( number );
    char    temp_digit  = 0;
 
    //
    while ( i-- )
    {
        //
        temp_digit  =   number[i] - '0';
        temp_digit  <<= !( i % 2 );
        temp_digit  -=  9 * ( temp_digit > 9 );
 
        //
        digits += temp_digit;
    }
 
    //
    return digits;
}
 
// Get Luhn Key
char GetLuhnKeyAlgo(
    const char * number
)
{
    return ( 10 - SumLuhn( number ) % 10 ) % 10;
}
 
// CheckSum Luhn
bool CheckSumLuhnAlgo(
    const char * number
)
{
    return ( SumLuhn( number ) % 10 == 0 );
}
