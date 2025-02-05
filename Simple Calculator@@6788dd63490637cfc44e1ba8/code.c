#include <stdio.h>
int main()
{
    char op;
    int a,b,res;
    scanf("%d%d%c",&a,&b,&c);
    switch (op)
    {
        case '+':
        res=a+b;
        printf("%d",res);
        break;
        case '-':
        res=a-b;
        printf("%d",res);
        break;
        case '*':
        res=a*b;
        printf("%d",res);
        break;
        case '/':
        res=a/b;
        printf("%d",res);
        break;
        default:
        printf("Error");
        break;
        
    }

}