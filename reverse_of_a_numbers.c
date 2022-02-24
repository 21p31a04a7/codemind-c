
#include<stdio.h>
int main()
{
  long int n,rev=0,rem;
  scanf("%ld",&n);
  while(n!=0)
  {
      rem=n%10;
      rev=rev*10+rem;
      n/=10;
  }
  printf("%ld",rev);
  return 0;
}
