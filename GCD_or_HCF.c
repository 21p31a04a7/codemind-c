
#include<stdio.h>
int main()
{
    int N,M;
    scanf("%d%d",&N,&M);
    while(N!=M)
    {
        if(N>M)
        N-=M;
        else
        M-=N;
    }
    printf("%d",N);
    return 0;
}
