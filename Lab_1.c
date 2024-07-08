
#include <stdio.h>
#include <stdlib.h>

int main() {
	
	printf("Enter: x and y: \n");
	
	float x = 0, y = 0, z = 0;
	
	scanf ("%f%f", &x, &y);
	
	z = 2 / 3;
	
	if (y >= 2.0 / 3.0 * x - 2 && y <= -2.0 / 3.0 * x + 2 && y <= 2 && y >= -2 && x <= 1.5 && x >= -2)
		
		printf ("The point belongs to the figuer\n");
		
		else 
	
			printf ("The point doesn't belong to the figuer\n");
	
	system ("PAUSE");
	
return 0;

}