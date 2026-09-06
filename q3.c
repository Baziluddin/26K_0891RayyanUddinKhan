#include <stdio.h>
int main()
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    printf("Decimal: %d\n", number);
    printf("Octal: %o\n", number);
    printf("Lowercase Hexadecimal: %x\n", number);
    printf("Uppercase Hexadecimal: %X\n", number);
    return 0;
}
