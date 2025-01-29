#include <stdio.h>
int main()
{
    int a,b,c;
    int result= (float)(a+b+c)/3;
    scanf("%d %d %d", &a,&b,&c);
    printf("Average: %.2f", result);
}