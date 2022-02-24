
#include<stdio.h>
int main()
{
    int N,o,sum=0;
    int d;
    scanf("%d",&N);
    o=N;
    while(o!=0)
    {
        d=o%10;
        sum+=d;
        o=o/10;
    }
    if(N%sum==0)
    printf("True");
    else
    printf("False");
    return 0;
}
