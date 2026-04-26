
int main(void)
{
    float x, polynom_value;
    printf("Enter value for x: ");
    scanf("%f", &x);

    polynom_value = (((((3.0f * x) + 2.0f) * x - 5.0f) * x - 1.0f) * x + 7.0f)  * x - 6.0f;
    printf("The value of the polynomial is: %.2f\n", polynom_value);
    return 0;
}