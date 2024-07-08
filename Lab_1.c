
#include <stdio.h>
#include <stdlib.h>

int main() {
	
	system ("chcp 65001");
	
	printf("Введите координаты x и y: \n");
	
	float x = 0, y = 0, z = 0;
	
	scanf ("%f%f", &x, &y);
	
	z = 2 / 3;
	
	if (y >= 2.0 / 3.0 * x - 2 && y <= -2.0 / 3.0 * x + 2 && y <= 2 && y >= -2 && x <= 1.5 && x >= -2)
		
		printf ("Точка принадлежит фигуре\n");
		
		else 
	
			printf ("Точка не принадлежит фигуре\n");
	
	system ("PAUSE");
	
return 0;

}