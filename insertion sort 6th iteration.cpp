#include<stdio.h>
int main()
{
 int arr[20],i,n,k;
 printf("Enter total elements: ");
 scanf("%d",&n);
 printf("Enter elements: ");
 for(i=0;i<n;i++)
{
 scanf("%d",&arr[i]);
}
 printf("Original Array: ");
 for(i=0;i<n;i++)
{
 printf("%d ",arr[i]);
 }
 printf("\n");
 for (i=1;i<n;i++)
{
 int key=arr[i];
 int j=i-1;
 while(j>=0 && arr[j]>key) 
{
 arr[j + 1] = arr[j];
 j = j - 1;
 }
 arr[j + 1] = key;
 printf("Iteration %d: ", i);
 for(k=0;k<n;k++) 
{
 printf("%d ", arr[k]);
 }
 printf("\n");
 if (i == 5) 
{
 printf("Result after 6th Iteration: ");
 for (k = 0; k < n; k++) 
{
 printf("%d ", arr[k]);
 }
 printf("\n");
 break;
 }
 }
 return 0;
}
