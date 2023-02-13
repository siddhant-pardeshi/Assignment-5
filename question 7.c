//Write a program to print the first n even natural numbers in reverse order

#include <stdio.h>
int main()

{
int n,i;
printf("Enter number to print even natural numbers:-");
scanf("%d",&n);

for(i=2*n;i>=2;i-=2)

printf("%d\n",i);

return 0;
}
