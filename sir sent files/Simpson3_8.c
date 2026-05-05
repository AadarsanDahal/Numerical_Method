#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x)
	{
		return (1/(1+x*x));
	}
	float simp3_8(float a, float b, int n)
	{
		int i;
		float h,sum;
		h=(b-a)/n;
		printf("\nWhen X=%.2f, F(%.2f)=%.4f",a,a,f(a));
		sum=f(a)+f(b);
		for(i=1;i<n;i++)
		{
			printf("\nWhen X=%.2f, F(%.2f)=%.4f",a+(i*h),a+(i*h),f(a+(i*h)));
			if(i%3==0)
				sum=sum+2*f(a+(i*h));
			else
				sum=sum+3*f(a+(i*h));
		}
		printf("\nWhen X=%.2f, F(%.2f)=%.4f",b,b,f(b));
			sum=sum*3*h/8;
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
	result=simp3_8(a,b,n);
	printf("\n\nThe Integral value using Simpson's 3/8 Integration is = %.4f",result);
	return 0;
	getch();
	
}
