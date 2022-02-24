
#include<stdio.h>
int main()
{
    int N,r,t,sum=0;
    scanf("%d",&N);
    t=N;
    while(N!=0)
    {
        r=N%10;
        sum=sum*10+r;
        N=N/10;
    }
    if(t==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
        return 0;
    }
}
