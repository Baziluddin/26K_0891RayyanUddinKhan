#include <stdio.h>
int main()
{
    char fullName[100];
    printf("Enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);
    printf("Welcome, %s", fullName);
    printf("Welcome to the BCS-1J PF lab.\n");
    return 0;
}
