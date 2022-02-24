
#include<stdio.h>
int main()
{
    int N,rem,lar=0;
    scanf("%d",&N);
    while(N>0)
    {
        rem=N%10;
        if(lar<rem)
    {
    lar=rem;
    }
    N=N/10;
}
printf("%d",lar);
return 0;
}
