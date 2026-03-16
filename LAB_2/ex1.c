// Langrange interpolation 

#include <stdio.h>
#include <math.h>

float x[100], y[100];
int n;



void takedata(int n, float x[], float y[]) {


    printf("Enter the number of data points: ");
    scanf("%d", &n);


    
    for (int i = 0; i < n; i++) {
        printf("Enter x%d and y%d: ", i, i);
        scanf("%f %f", &x[i], &y[i]);
    }

    //printing data here 

    for (int i = 0; i < n; i++) {
        printf("x%d = %f, y%d = %f\n", i, x[i], i, y[i]);
    }
    
}

int main() {
    float xp;
    double result = 0.0;

    takedata(n, x, y);

    if (n <= 0 || n > 100) {
        return 1;
    }

    printf("Enter the value of x where interpolation is needed: ");
    scanf("%f", &xp);

    for (int i = 0; i < n; i++) {
        double term = y[i];

        for (int j = 0; j < n; j++) {
            if (j != i) {
                term = term * (xp - x[j]) / (x[i] - x[j]);
            }
        }

        result += term;
    }

    printf("Interpolated value at x = %f is %lf\n", xp, result);

    return 0;
}