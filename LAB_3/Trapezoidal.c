#include<stdio.h>
#include<conio.h>
#include<math.h>
	float f(float x)
	{
		return (1/(1+x*x));
	}
	float trapez(float a, float b, int n)
	{
		int i;
		float h,sum;
		sum=f(a)+f(b);
		h=(b-a)/n;
		printf("\nWhen X=%.2f, F(%.2f)=%.4f",a,a,f(a));
		for(i=1;i<n;i++)
		{
			printf("\nWhen X=%.2f, F(%.2f)=%.4f",a+(i*h),a+(i*h),f(a+(i*h)));
			sum=sum+2*f(a+(i*h));
		}
		printf("\nWhen X=%.2f, F(%.2f)=%.4f",b,b,f(b));
			sum=sum*h/2;
			return sum;
	}
int main()
{
	float a,b,result;
	int n;
	printf("Enter number of intervals:");
	scanf("%d",&n);
	printf("\nEnter the lower limit of integration:");
	scanf("%f",&a);
	printf("\nEnter the upper limit of integration:");
	scanf("%f",&b);
	result=trapez(a,b,n);
	printf("\n\nThe Integral value using Trapezoidal Integration = %.4f",result);
	return 0;
	getch();
	
}
