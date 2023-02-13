//Write a program to print the first n even natural numbers

#include <stdio.h>
int main()
{
int n,i;
printf("Enter the number N to print even numbers:-");
scanf("%d",&n);

for(i=2;i<=2*n;i=i+2)

printf("%d\n",i);

return 0;
}
