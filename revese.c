#include<stdio.h>
int main()
{
int num,rev=0,rem,orig;
orig=num;
while(num>0)
{
rem=num%10;
rev=(rev*10)+rem;
num=num/10;
}
printf("%d",rev);
if(orig==rev)
{
printf("no is polindrome");
}
else
{
printf("no is not polindrome");
}
return 0;
}
