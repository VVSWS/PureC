#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

int main() {
	
	system ("chcp 65001");
	
	int64_t n = 0, f = 0;
	
//*******************Filling the array****************	

	printf("Enter a number of elements of the array:\n\n");
	
	scanf ("%" SCNd64, &n);
	
	int64_t arr[n];
	
	printf("\nEnter elements of the array: \n\n");
	
	for (int i = 0; i < n; i++) {
	
		
		scanf ("%" SCNd64, &arr[i]);
	
	if (!arr[i]) 
	
		f += 1;	
	
	}
	
	if (f)
	
	printf ("\nTask А) The number of elements of array that equal zero: %d\n\n", f);
	
		else
			
			printf ("\nTask А) There are no elements that equal zero.\n\n");
			
//Calculating indexes
			
	int64_t min = arr[0], max = arr[0], imin = 0, imax = 0;
	
	for (int64_t i = 0; i < n ; i++) {
		
		if (arr[i] < min) {
			
			min = arr[i];
		
			imin = i;
			
		}
		
		if (arr[i] > max) {
			
			max = arr[i];
			
			imax = i;
			
		}
	}

	printf ("Enter interval values a and b:\n\n");
	
	int64_t a = 0, b = 0;
	
	scanf ("%" SCNd64 "%" SCNd64, &a, &b);
	
	if (a > b) {
		
		f = a;
		
		a = b;
		
		b = f;
		
	}
	
	f = 0;
	 
	
	if (a <= min && b >= max) 
	
		printf ("\nTask B) can't be calculated. \n\n");
		
		else if (a > min && b < max) 
		
			
			printf ("\nTask B) The sum of inexes is: " "%" PRId64 "\n\n" , imin + imax);	
			
				else if (a <= min && b < max) {
		
					min = max;
		
					imin = imax;
		
						for (int64_t i = 0; i < n; i++) {
			
							if (arr[i] < min && arr[i] > b) {
				
								min = arr[i];
				
								imin = i;
				
							}
			
						}
		
							if (min == max) 
		
								printf ("\nTask B) There is the only element outside the range: " "%" PRId64 "\n\n", imax);
											
									else 
							
										printf ("\nTask B) The sum of indexes is: " "%" PRId64 "\n\n" , imin + imax);	
		
				}
				
					else if (a > min && b >= max) {
						
						max = min;
						
						imax = imin;
						
							for (int64_t i = 0; i < n; i++) {
			
								if (arr[i] > max && arr[i] < a) {
				
									max = arr[i];
				
									imax = i;
				
								}
			
						}
		
									if (min == max) 
		
										printf ("\nTask B) There is the only element outside the range: " "%" PRId64 "\n\n", imin);
												
											else 
							
												printf ("\nTask B) The sum of indexes is: " "%" PRId64 "\n\n" , imin + imax);	
							
						
					}
		
		
		
	
					
//Calculating the product of array elements, that equal k.
		
	int64_t k = 0, sum = 0;
	
	printf ("Enter k:\n\n");
	
	scanf ("%" SCNd64, &k);
	
	sum = arr[0];
	
	if (k <= 0 || k > n) 
		
		printf ("\nTask C) can't be calculated. \n\n");
		
		else if (k == 1)
		
			printf ("\nTask C) There is the only element: " "%" PRId64 "\n\n", arr[0]);
		
			else {
							
				for (int64_t i = 0; i < k; i++) {
					
					sum *= arr[i];
	
				}
	
					printf ("\nTask C) The product of "  "%" PRId64 " elements of hte array equals: " "%" PRId64 "\n\n", k, sum);
				
				}
				
	
				
	system ("PAUSE");
	
return 0;
	
}