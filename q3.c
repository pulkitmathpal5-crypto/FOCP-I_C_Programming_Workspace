#include<stdio.h>
int reversdigits(int n){
    int rev=0;
    while(n>0)
    {int digits = n%10;
    rev=rev*10 + digits;
    n=n/10;
    }
    return rev;
}
int main(){
    int n;
scanf("%d",&n);
printf("%d",reversdigits(n));
return 0;
}
