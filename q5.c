#include <stdio.h>
int main()
{
    double temperature;
    printf("Enter temperature in Centigrade: ");
    scanf("%lf", &temperature);
    printf("Default format: %f\n", temperature);
    printf("Exactly 3 decimal places: %.3lf\n", temperature);
    printf("Scientific notation: %e\n", temperature);
    return 0;
}
