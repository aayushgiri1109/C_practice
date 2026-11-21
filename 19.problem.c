#include <stdio.h>

int main(){
    
   // 8! = 1 X 2 X 3 X 4 X 5 X 6 X 7 X 8 
   // from while loop

   int product = 1 ;
   int n = 5 ; 
   int i = 1 ; // initialized and declared i
   while (i <= n)
   {
    product *= i;
    i++; 
   }
   printf("the factorial of %d is %d\n", n , product);
    return 0;
}