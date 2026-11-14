#include<stdio.h>
int reversethedigits(int n){

while(n>0)
{   int digit=n%10;
    printf("%d",digit);
    n=n/10;
}
return n;
}
int main()
{   int n;
    scanf("%d",&n);
    reversethedigits(n);
    return 0;
}