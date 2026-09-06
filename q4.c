#include <stdio.h>
int main()
{
    char grade;
    printf("Enter your expected PF lab grade: ");
    grade = getchar();
    putchar('\n');
    printf("Grade Submitted: %c\n", grade);
    printf("Entry saved.\a\n");
    return 0;
}
