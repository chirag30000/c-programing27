#include<stdio.h>
int main()
{
int num;
printf("enter any number");
scanf("%d",&num);
switch(num>0)
{
case 1:printf("no is positive");
        break;
case 0: switch(num<0)
{
case 1:printf("no is negetive");
        break;
case 0:printf("no is zero");
         break;
}
}
return 0;
}
