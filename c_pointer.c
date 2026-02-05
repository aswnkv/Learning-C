#include <stdio.h>

#include <math.h>    


int main() {
    int a,b,sum,diff;
    scanf("%d %d",&a,&b);
    sum=a+b;
    diff=abs(a-b);
    a*=sum;
    b*=diff;
    printf("%d\n%d",sum,diff);
    return 0;
}