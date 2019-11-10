#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    long long n;
    scanf("%lld",&n);
    int A[1000],i=0,t=0,e=0,B[1000];
    while(n>0)
    {
        A[i]=n%2;
        n=n/2;
        i++;
        t++;
    }
    for(int j=0;j<t;j++)
    {
        B[e]=A[j];
        e++;
    }
    for(int i=e-1;i>=0;i--)
    {
        printf("%d",B[i]);
    }
    return 0;
}
