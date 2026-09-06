#include <stdio.h>
int main()
{
    char fn[50];
    printf("Enter your full name : ");
    fgets(fn, sizeof(fn), stdin);
    printf("Your full name is: %s", fn);
    return 0;
}
