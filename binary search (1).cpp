#include <stdio.h> 
int main() { 
    int arr[] = {1, 5, 6, 7, 9, 10}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x; 
    printf("Enter the element to search: "); 
    scanf("%d", &x); 
    int low = 0, high = n - 1, mid, location = -1; 
    while (low <= high) { 
        mid = (low + high) / 2; 
        if (arr[mid] == x) { 
            location = mid + 1; 
            break; 
        } else if (arr[mid] < x) { 
            low = mid + 1; 
        } else { 
            high = mid - 1; 
        } 
    } 
    if (location != -1) { 
        printf("Element found at location %d\n", location); 
    } else { 
        printf("Element not found\n"); 
    } 
    return 0; 
} 
