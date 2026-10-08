#include <stdio.h>
int factorial(int a)
{
    int i;
    int res = 1;

    for(i=0; i<a;i++) {
    res =res*(i+1);
 }
  return res;
}


int combination(int u, int d)
{

    int up, down;
    //분자 계산 : up
    up = factorial(u);
    //분모 계산 : down
    down = factorial(d) * factorial(u - d);

    return (up/down);
}

int main() {
    //변수선언
    int u, d;
    int result;

    //입력받기
    printf("Enter u: ");
    scanf("%i", &u  );
    printf("Enter d: ");
    scanf("%i", &d);

    //combination 계산

   //결과도출 
result = combination(u, d);
printf("Result is: %i\n", result);

    return 0;
}