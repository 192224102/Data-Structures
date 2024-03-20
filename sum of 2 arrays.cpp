#include <stdio.h> 
int main() { 
    // Size of the arrays 
    int m, n; 
    printf("Enter the size of nums1: "); 
    scanf("%d", &m); 
    printf("Enter the size of nums2: "); 
    scanf("%d", &n); 
    int nums1[m], nums2[n]; 
    printf("Enter elements for nums1 in ascending order:\n"); 
    for (int i = 0; i < m; ++i) { 
        scanf("%d", &nums1[i]); 
    } 
    printf("Enter elements for nums2 in ascending order:\n"); 
    for (int i = 0; i < n; ++i) { 
        scanf("%d", &nums2[i]); 
    } 
    printf("Sum of the two sorted arrays: "); 
        int i = 0, j = 0; 
    while (i < m && j < n) { 
        if (nums1[i] < nums2[j]) { 
            printf("%d ", nums1[i]); 
            i++; 
        } else { 
            printf("%d ", nums2[j]); 
            j++; 
        } 
    } 
    while (i < m) { 
        printf("%d ", nums1[i]); 
        i++; 
    } 
   while (j < n) { 
        printf("%d ", nums2[j]); 
        j++; 
    } 
printf("\n"); 
return 0; 
}
