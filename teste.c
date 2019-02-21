#include<stdio.h>
#include<math.h>

int main(int argc, char *argv[])
{
	float x1, x2, y1, y2, valorFinal;
	printf("Defina (x1,y1) e (x2,y2):");
	scanf("%f %f %f %f", &x1 ,&y1 ,&x2 ,&y2);
	valorFinal = sqrt(((pow((x2 - x1),2)) + (pow((y2 - y1),2))));
	printf("Valor Final: %f",valorFinal);
	return 0;
}