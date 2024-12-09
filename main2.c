#include <stdio.h>
#include <math.h>
int main()
{
    double pi=0.0;
    double term =0.0;
    double target = 3.14159;
    double tolerance = 0.00001;
    int x;
    for(x=1; x<=100000; x++){
        term = 4.0/(2*x-1);
        if (x%2==0){
            pi -= term;
        }
        else {
            pi += term;
        }
        if (fabs(pi - target) < tolerance) {
            break;
        }
    }    
    printf("%d",x);

    return 0;
}
