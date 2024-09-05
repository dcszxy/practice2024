#include <stdio.h>

int main()
{
	float weight, height;
	
	printf("몸무게(kg) : ");
	scanf_s("%F", &weight);
	printf("키(cm) : ");
	scanf_s("%F", &height);
	
	height /= 100;

	float bmi = weight / (height * height);
	printf("%.2f",bmi);
}
