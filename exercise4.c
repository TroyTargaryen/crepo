#include <stdio.h>

int main(void)
{
    float dollars_input, dollar_output;
    printf("Enter dollars-and-cents amount: $");
    scanf("%f", &dollars_input);
    dollar_output = dollars_input + (dollars_input * (5.0f / 100.0f));
    printf("%.2f", dollar_output);
    return 0;
}