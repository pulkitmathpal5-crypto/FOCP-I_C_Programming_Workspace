#include<stdio.h>

int sumDigits(int n) {
    
    // Write your logic here
    int digit, sum=0;

    while(n>0)
    {
    digit = n % 10;
    sum = sum + digit;
    n = n / 10;}

return sum;}

    int main(){
        int n;
    
    scanf("%d",&n);
    printf("%d",sumDigits(n));
    return 0;
}
