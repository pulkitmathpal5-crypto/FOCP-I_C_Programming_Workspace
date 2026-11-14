#include<stdio.h>
int sumofthedigits(int n){
    int i,sum=0;
    while(n>0){
    i=n%10;
    sum+=i;
    n=n/10;}

    return sum;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sumofthedigits(n));
    return 0;
}