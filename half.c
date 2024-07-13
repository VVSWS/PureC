#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float bisec(float a, float b, float e, float e1); //Function declaration
float f( float x);
int sign(float x);

int main(void)
{
 system ("chcp 65001");
 printf("The function is equal to zero at the point x = %f, accurate to 0,0001", bisec(2.0, 4.0, 0.0001, 0.0001));
 system ("PAUSE");
}

float f( float x) //Function declaration
{
 return sqrt(x)-sin(x/2)-1;
}
int sign(float x)
{
 int res;
 res=0;
 if (x<0) res=-1;
 if (x>0) res= 1;
 return res;
}
float bisec(float a, float b, float e, float e1)
{
float x;
while (b-a>e)
 {
 x=(a+b)/2;
 if (fabs(f(x))<e1) break;
 if (sign(f(a))==sign(f(x))) a=x;
 else b=x;
 }
 return x;
}