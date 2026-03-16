#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float x[10],y[10],logy[10],sum_x=0,sum_logy=0,sqr_sum_x=0,prod_x_logy=0,a,b,A,B;
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
		logy[i]=log10(y[i]);
		sum_x+=x[i];
		sum_logy+=logy[i];
		sqr_sum_x+=x[i]*x[i];
		prod_x_logy+=x[i]*logy[i];
	}
	printf("\nSum_X=%f",sum_x);
	printf("\nSum_logY=%f",sum_logy);
	printf("\nSum_X^2=%f",sqr_sum_x);
	printf("\nSum_X*logY=%f",prod_x_logy);
	B=(n*prod_x_logy-(sum_x*sum_logy))/(n*sqr_sum_x-(sum_x*sum_x));
	A=(sum_logy/n)-(B*sum_x/n);
	printf("\nA=%f and B=%f",A,B);
	a=pow(10,A);
	b=pow(10,B);
	printf("\na=%f and b=%f",a,b);
	printf("\nThe required equation is:  %.4f(%.4f)powX",a,b);
	return 0;
	getch();
	
}
