
#include<stdio.h>
#include<math.h>
int main()
{
    int num,s;
    float v;
    scanf("%d",&num);
    v=sqrt((double)num);
    s=v;
    if(s==v)
    printf("True");
    else
    printf("False");
    return 0;
}
