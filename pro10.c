#include<stdio.h>
int main()
{
int number,remainder,count;
printf("Enter the integer\n");
scanf("%d",&number);
for(count=0;number>0;number=number/10)
{
count=count+1;
}
printf("Number of digits of an integer is:%d",count);
return 0;
}
