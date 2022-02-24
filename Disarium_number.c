
#include<stdio.h>
#include<math.h>
int main()
{
    int N;
    scanf("%d",&N);
    int num=N,c=0;
    while(num!=0)
    {
        num/=10;
        c++;
    }
    num=N;
    int sum=0;
    while(num!=0)
    {
        int rem=num%10;
        sum+=pow(rem,c);
        num/=10;
        c--;
    }
    if(sum==N)
    printf("True");
    else
    printf("False");
    return 0;
}
