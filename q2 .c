#include<stdio.h>

char* evenOrOdd(int n) {
    // Write your logic here
if(n%2==0)
{return "even";}
else{return "odd";}

}
int main()
{int n;
scanf("%d",&n);
printf("%s",evenOrOdd(n));
return 0;
}