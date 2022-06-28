#include<stdio.h>
int main()
{
int a[100],i,j,n,s;
printf("Enter number of elements to enter: ");
scanf("%d",&n);
printf("Enter the numbers: ",n); 
for(i=0;i<n;i++)
{ 
scanf("%d",&a[i]);
}
for (i=1;i<n;i++)
{ s=a[i];
j=i-1;
while(j>=0 && a[j]>s)
{
a[j+1]=a[j];
j=j-1;
a[j+1]=s;
} 
}
printf("Sorted list in ascending order:\n");
for(i=0;i<n;i++)
{
printf("%d\t", a[i] ); 
} 
}
