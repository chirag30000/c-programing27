#include<stdio.h>
#include<math.h>
int main ()
{
float a,b,c,area,s;

scanf("%f%F%f",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("%f",area);

return 0;
}

