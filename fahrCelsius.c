#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */
int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = -40;      /* lower limit of temperature scale */
    upper = 100;    /* upper limit */
    step = 10;      /* step size */

    celsius = upper;

    printf("Temp(C)\tTemp(F)\n");
    while (celsius >= lower) {
        fahr = (9.0/5.0) * celsius + 32.0;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius - step;
    }
}