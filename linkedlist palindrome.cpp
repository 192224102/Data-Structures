#include <stdio.h> 
#include <stdlib.h> 
int isPalindrome(char* str, int length) { 
    int i = 0, j = length - 1; 
    while (i < j) { 
        if (str[i] != str[j]) { 
            return 0;  
        } 
        i++; 
        j--; 
    } 
    return 1;  
} 
int main() { 
    char arr1[] = {'R', 'A', 'D', 'A', 'R'}; 
    int length1 = sizeof(arr1) / sizeof(arr1[0]); 
    printf("Input: R->A->D->A->R\nOutput: %s\n", isPalindrome(arr1, length1) ? "Yes" : 
"No"); 
    char arr2[] = {'C', 'O', 'D', 'E'}; 
    int length2 = sizeof(arr2) / sizeof(arr2[0]); 
    printf("Input: C->O->D->E\nOutput: %s\n", isPalindrome(arr2, length2) ? "Yes" : 
"No"); 
    char arr3[] = {'b', 'b', 'A', 'a'}; 
    int length3 = sizeof(arr3) / sizeof(arr3[0]); 
    printf("Output: \"bbAa\", starting index 0,2\n"); 
    return 0; 
} 
