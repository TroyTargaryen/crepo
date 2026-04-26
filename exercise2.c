#include <stdio.h>
 int main(void)
 {
    float volume, set_radius;
    printf("Please enter radius: ");
    scanf("%f", &set_radius);
    volume = 4.0f/3.0f * 1.314 * (set_radius * set_radius * set_radius);
    printf("Volume = %.2f", volume);
    return 0;
 }