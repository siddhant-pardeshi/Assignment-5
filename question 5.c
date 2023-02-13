//Write a program to print the first n odd natural numbers in reverse order

#include <stdio.h>
int main()
{
int n,i;
printf("Enter number to print odd numbers:-");
scanf("%d",&n);

for(i=2*n-1;i>=1;i-=2)

printf("%d\n",i);

return 0;
}
