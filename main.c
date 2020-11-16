#include<stdio.h>
#include "basicMath.c"
#include "power.c"

int main()
{
    double x;
	printf("please insert a real nubmer\n");
	scanf("%lf",&x);

	double result;
	
	result = sub(add(exponent((int)x),power(x,3)),2);
	printf("The valute of f(x)=e^x + x^3 -2 at the point %lf is  :%0.4lf\n",x,result);

	result = add((mul(3,x),power(x,2)),2);
	printf("The valute of f(x)=3x + 2x^2 at the point %lf is :%0.4lf\n",x,result);

	result=sub(div(mul(4,power(x,3)),5),power(x,2));
	printf("The valute of f(x)=(4x^3)/5 -2x at the point %lf is :%0.4lf\n",x,result);

 return 0;
}
