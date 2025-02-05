#include <stdio.h>
int main()
{
    char op;
    int a,b;
    scanf("%d%d%c",&a,&b,&c);
    switch (op)
    {
        case '+':
        printf("%d",a+b);
        break;
        case '-':
       
        printf("%d",a-b);
        break;
        case '*':
       
        printf("%d",a*b);
        break;
        case '/':
       
        printf("%d",a/b);
        break;
        default:
        printf("error");
        
    }

}