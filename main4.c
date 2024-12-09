#include <stdio.h>

int main()
{   
    int i=12345;
    if (i>=1000){
        int a = i%10000-i%1000;
        int b = i%10;
        i=i-a+b*1000-b+a/1000;
        printf("%d",i);
    }
    else {
        int h=i%10;
        i=h*1000+i-h;
        printf("%d",i);
    }
    return 0;
}
