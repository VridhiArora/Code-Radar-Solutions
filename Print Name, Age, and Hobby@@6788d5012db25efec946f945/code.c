#include <stdio.h>
int main()
{
    char name[100];
    char hobby[100];
    int age;
    scanf("%s%d",name,&age);
    scanf("%s",hobby);
    printf("Nmae: %s", name);
    printf("Age: %d",age);
    printf("Hobby: %s",hobby);

}