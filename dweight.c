#include <stdio.h>
int main(void)
{
	int height = 10, length = 20, width = 30, volume, weight;
	volume = height * length * width;
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);
	return 0;
}

