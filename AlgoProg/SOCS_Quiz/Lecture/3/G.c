#include <stdio.h>
int main(){
    long long int A,B,C,D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
    if (A*B == C-D)
    {
        printf("True\n");
    } else if (A*B < C-D)
    {
        printf("False\n");
    } else if (A*B > C-D)
    {
        printf("False\n");
    }
    return 0;
}