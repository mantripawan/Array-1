#include <stdio.h>
int main ()
{
int n,arr[20],ele,i;
printf("Enter the value for n");
scanf("%d",&n);
printf("Enter array element");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("Enter element to be searched");
scanf("%d",&ele);
for(i=0;i<n;i++)
{
if (arr[i]==ele)
{
printf("Element found\n ");
}
else
{
printf("element not found\n");
}
}
}
