#include <stdio.h>

float p = 3.1415927;

void main()
{
	float D;
	int revo;
	float time;
	int count = 0;
	float distance, MPH;

	while ((scanf("%f%d%f", &D, &revo, &time)==3) && revo){
		distance = p * D * revo / (5280*12);
		MPH = distance / (time / 3600);
		printf("Trip #%d: %.2f %.2f\n", ++count, distance, MPH);
	}
}
