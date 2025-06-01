#include <stdio.h>

int main( void )
{
   int integer1;
   int integer2;
   int x;

   printf( "Enter first integer\n" ); 
   scanf( "%d", &integer1 );       

   printf( "Enter second integer\n" ); 
   scanf( "%d", &integer2 );           
   
   x = integer1 + integer2; /* assign total to sum */

   printf( "Sum is %d\n", x ); /* print sum */
   return 0; /* indicate that program ended successfully */

} /* end function main */
