#include <stdio.h>
#include <stdlib.h>
typedef struct {
int numerator;
int denomenator;
} rational;
rational makerational (int,int);
rational add_rational (rational,rational);
int main ()
{
	int a1,b1,a2,b2;
	printf("Enter Numerator and Denomenator of first rational number\n");
	scanf("%d%d",&a1,&b1);
	printf("Enter Numerator and Denomenator of second rational number\n");
	scanf("%d%d",&a2,&b2);
	rational r1=makerational(a1,b1);
	rational r2=makerational(a2,b2);
	rational r3=add_rational(r1,r2);
	printf("%d/%d",r3.numerator,r3.denomenator);
}
rational makerational(int a, int b)
{
	if (b==0)
	{
		exit(0);
	}else 
	{
	rational r_number;
	r_number.numerator=a;
	r_number.denomenator=b;
	return r_number;
	}
}

rational add_rational (rational r1,rational r2)
{
	rational result;
	result.numerator=(r1.numerator*r2.denomenator)+(r2.numerator*r1.denomenator);
	result.denomenator=(r1.denomenator*r2.denomenator);
	return result;
}

