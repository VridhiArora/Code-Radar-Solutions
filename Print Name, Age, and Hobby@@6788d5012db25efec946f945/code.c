#include <stdio.h>
int main(){
    char name[10];
    int age;
    char hobby[10];
    scanf("%s%d%s",&name,&age,&hobby);
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n",hobby);
    return 0;
}