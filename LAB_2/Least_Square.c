#include<stdio.h>
#include<conio.h>
int main()
{
	float x[10],y[10],sum_x=0,sum_y=0,sqr_sum_x=0,prod_xy=0,a,b;
	int n,i;
	printf("Enter number of points:");
	scanf("%d",&n);
	printf("\nEnter the points and coresponding functional value\n");
	for(i=0;i<n;i++)
	{
		printf("x[%d]:",i+1);
		scanf("%f",&x[i]);
		printf("fx[%d]:",i+1);
		scanf("%f",&y[i]);
		sum_x+=x[i];
		sum_y+=y[i];
		sqr_sum_x+=x[i]*x[i];
		prod_xy+=x[i]*y[i];
	}
	printf("\nSum_X=%f",sum_x);
	printf("\nSum_Y=%f",sum_y);
	printf("\nSum_X^2=%f",sqr_sum_x);
	printf("\nSum_X*Y=%f",prod_xy);
	b=(n*prod_xy-(sum_x*sum_y))/(n*sqr_sum_x-(sum_x*sum_x));
	a=(sum_y/n)-(b*sum_x/n);
	printf("\nThe required equation is:  %.2f+%.2fX",a,b);
	return 0;
	getch();
	
}
