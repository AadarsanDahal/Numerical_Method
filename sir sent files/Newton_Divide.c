#include<stdio.h>
#include<conio.h>
int main()
{
	float x[10],fx[10],x1,y[10];
	float sum=0;
	int i,j,n,k=1;
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
	scanf("%f",&x1);
	for(j=0;j<=n-1;j++)
	{
		for(i=n-1;i>j;i--)
		{
			fx[i]=(fx[i]-fx[i-1])/(x[i]-x[i-k]);	
		}
		k++;
	}
	for(i=0;i<n;i++)
	{
		printf("\nThe value of delf[%d]: %f",i,fx[i]);
	}
	y[0]=1.0;
	for(i=1;i<n;i++)
	{
		y[i]=y[i-1]*(x1-x[i-1]);
	}
	for(i=0;i<n;i++)
	{
		sum+=fx[i]*y[i];
	}
	printf("\nFunctional value at %f= %f",x1,sum);
	return 0;
	getch();
	
}
