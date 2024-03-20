#include <stdio.h> 
int main() { 
    int n,i,arr[50]; 
    printf("Enter the size of the array: "); 
    scanf("%d", &n); 
    printf("Enter the elements of the array:\n"); 
    for (i = 0; i < n; i++) 
 { 
     scanf("%d", &arr[i]); 
 } 
    for (i = 0; i < n; i++)  
 { 
        while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i])  
  { 
            int temp = arr[i]; 
            arr[i] = arr[temp - 1]; 
            arr[temp - 1] = temp; 
        } 
    } 
    int missing = n + 1; 
    for (i = 0; i < n; i++)  
 { 
        if (arr[i] != i + 1)  
  { 
            missing = i + 1; 
            break; 
        } 
    } 
    printf("The smallest positive number missing is: %d\n", missing); 
} 
