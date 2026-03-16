#include<stdio.h>
#include<conio.h>
#define size 10
int main()
{
	int i,j,n;
	float x[size], fx[size],point,sum=0,prod;
	printf("Enter number of points:");
	scanf("%d",&n);
	printf("\nEnter the points and coresponding functional value\n");
	for(i=0;i<n;i++)
	{
		printf("x[%d]:",i+1);
		scanf("%f",&x[i]);
		printf("fx[%d]:",i+1);
		scanf("%f",&fx[i]);
	}
	printf("Enter the point where functional value is to be calculated:");
	scanf("%f",&point);
	for(i=0;i<n;i++)
	{
		prod=1.0;
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
				prod=prod*(point-x[j])/(x[i]-x[j]);
			}
			
		}
		sum=sum+fx[i]*prod;
	}
	printf("\nFunctional value at %f= %f",point,sum);
	return 0;
	getch();
}
