#include<stdio.h> 
#include<conio.h> 
int fact(int n) 
{
	if(n==1)
	return 1;
	else return (n*fact(n-1));
}
int main() 
{
int n,i,j,k;
float v=0,temp,temp1,xp,x[10],fx[10],fd[10],h,s,der,prev; 
printf("Enter the number of points\n"); 
scanf("%d",&n); 
printf("\nEnter the points and coresponding functional value\n");
	for(i=0;i<n;i++)
	{
		printf("x[%d]:",i+1);
		scanf("%f",&x[i]);
		printf("fx[%d]:",i+1);
		scanf("%f",&fx[i]);
	}
printf("Enter the value at which derivative is to be calculated: "); 
scanf("%f",&xp);
h=x[1]-x[0];
s=(xp-x[0])/h;
for(i=0;i<n;i++) 
{
	fd[i]=fx[i];
}
for(i=0;i<n;i++)
{
	for(j=n-1;j>i;j--)
	{
		fd[j] =(fd[j]-fd[j-1]);
	}
	printf("\n delf[%d]=%f",i,fd[i]);
} 
v=fd[1];
prev=1;
for(i=2;i<n;i++)
{
	temp=1;
	for(k=2;k<=i;k++)
	{
		temp=temp*(s-k+2); 
	}
	temp1=(s-i+1)*prev;
	prev=temp+temp1;
	v=v+(fd[i]*prev)/fact(i); 
}
printf("\n interval is %f and sum is %f",h,v);
der=v/h;
printf("\n\nDerivative at %.2f = %.4f",xp,der);	
getch(); 
return 0;
} 

