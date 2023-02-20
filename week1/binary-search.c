
#include<stdio.h>
int main()
{

int a[10],i,n,search,first,last,middle;
printf("Enter the number of elements in the array

");
scanf("%d",&n);
printf("Enter the elements of the array

");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the element to be searched

");

scanf("%d",&search);
first=0;
last=n-1;
middle=(first+last)/2;
while(first<=last)
{
if(a[middle]<search)
first=middle+1;
else if(a[middle]==search)
{
printf("Element found at position %d",middle+1);
break;
}
else
last=middle-1;
middle=(first+last)/2;
}
if(first>last)
printf("Element not found");
return 0;
}
