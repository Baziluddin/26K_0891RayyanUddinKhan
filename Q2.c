#include <stdio.h>
int main()
{
    int studentID;
    char section;
    float gpa;
    printf("Enter student ID: ");
    scanf("%d", &studentID);
    printf("Enter section: ");
    scanf(" %c", &section);
    printf("Enter GPA: ");
    scanf("%f", &gpa);
    printf("ID:\t%d\nSection:\t%c\nGPA:\t%.2f\n",
           studentID, section, gpa);
    return 0;
}
