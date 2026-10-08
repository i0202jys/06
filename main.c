#include <stdio.h>

int sumTWO (int a, int b){
return (a+b);
}
//-------------------------

 int square (int n){
 return n*n;
}
//-------------------------

   int get_max (int x, int y){
    if (x>y)
        return x;
    else
        return y;
}
//-------------------------
int main(void)
{
   printf("sumTWO result is %d\n", sumTWO(5, 10));
   printf("square result is %d\n", square(5));
   printf("get_max result is %d\n", get_max(5, 10));

   return 0;
}