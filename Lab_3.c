#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <math.h>

double f(double x) { // Integrand

return sqrt(pow(x, 2) + exp(x));

}

double rect(double a, double b, int16_t n) { //Central rectangle method

   double h = 0.0, x = 0.0, s = 0.0; // h integration step, x present value
				                     // variable of integration, s the result of the
   h = (b - a) / n;                  // definition of the integration step

   x = a + h / 2;

   for (int16_t i = 1; i <=n ; ++i) {

   s = s + f(x);

   x = x + h;

   }

return s * h;

}

int main() {

   system ("chcp 65001");

   int16_t arr[] = {15, 20, 150, 650}; //Array of partitions

   for (int8_t i = 0; i < 4; ++i) //Calculating

       printf ("With the number of partitions n = " "%" PRId16 ", approximate value of the integral = %fl\n\n", arr[i], rect(1.0, 5.0, arr[i])); 

   system ("PAUSE");

return 0;

}