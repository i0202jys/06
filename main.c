#include <stdio.h>
void func(void)
{
    int x;
    printf("func x is at %p\n", &x);
}

int main(void)
{
    int x; //func의 x랑 아예 다름. 저희는 다른 엑소입니다
    printf("main x is at %p\n", &x);
    func();

    return 0;
}