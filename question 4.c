//Write a program to print the first n odd natural numbers

#include <stdio.h>
int main()
{
int n,i;
printf("Enter the number N to print odd numbers:-");
scanf("%d",&n);

for(i=1;i<=2*n-1;i=i+2)

printf("%d\n",i);

return 0;
}
