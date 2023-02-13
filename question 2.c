//Write a program to print the first N natural numbers.

#include <stdio.h>
int main()
{
int n,i;
printf("Enter the number N to print natural numbers:-");
scanf("%d",&n);

for(i=1;i<=n;i++)
printf("%d\n",i);

return 0;
}
