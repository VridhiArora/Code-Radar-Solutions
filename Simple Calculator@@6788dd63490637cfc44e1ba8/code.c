#include <stdio.h>
int main()
{
    char op;
    int a,b;
    scanf("%d %d %c",&a,&b,&op);
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
        if(b==0)
        {
            printf("error");
        }
        else
        {
            printf("%d",a/b);

        }
       
       
        break;
        default:
        printf("error");
       
        
    }

}