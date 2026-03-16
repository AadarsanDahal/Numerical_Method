#include<stdio.h>
#include<math.h>

float f(float x)
{
    return 1/(1+x*x);   // Function to integrate
}

int main()
{
    int i,j,n;
    float a,b,h,sum;
    float R[10][10];

    printf("Enter lower limit (a): ");
    scanf("%f",&a);

    printf("Enter upper limit (b): ");
    scanf("%f",&b);

    printf("Enter number of iterations: ");
    scanf("%d",&n);

    h = b - a;

    
    R[0][0] = (h/2)*(f(a)+f(b));

    for(i=1;i<n;i++)
    {
        h = h/2;
        sum = 0;

        for(j=1;j<=pow(2,i-1);j++)
        {
            sum += f(a + (2*j-1)*h);
        }

    
        R[i][0] = 0.5*R[i-1][0] + h*sum;

        //Romberg extrapolation 
        for(j=1;j<=i;j++)
        {
            R[i][j] = R[i][j-1] +
                     (R[i][j-1] - R[i-1][j-1]) /
                     (pow(4,j) - 1);
        }
    }

    printf("\nRomberg Integration Table:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%f\t",R[i][j]);
        }
        printf("\n");
    }

    printf("\nFinal Result = %f\n",R[n-1][n-1]);

    return 0;
    
}