#include<stdio.h>

void main()
{
int a;
int b;
int c;
printf("enter the first number\n");
scanf("%d",&a);
printf("enter the second number\n");
scanf("%d",&b);
printf("enter the third number\n");
scanf("%d",&c);
if(a>b&&a>c)
{
printf("%d is the big value\n",a);

if(b>c)
{
printf("%d is the medium value\n",b);
printf("%d is the small value\n",c);
}
else
{
printf("%d is the medium value\n",c);
printf("%d is the small value\n",b);
}
}
else if(b>a&&b>c)
{
printf("%d is the big value\n",b);

if (a>c)
{
printf("%d is the medium value\n",a);
printf("%d is the small value\n",c);
}
else
{
printf("%d is the medium\n",c);
printf("d is the small\n",a);
}
}
else
{
printf("%d is the big value\n",c);

if (a>b)
{
printf("%d is the medium value\n",a);
printf("%d is the small value\n",b);
}
else
{
printf("%d is  the medium value\n",b);
printf("%d is the small value\n",a);
}
}
}