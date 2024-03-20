#include <stdio.h> 
int main() { 
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
 int i; 
       printf("Odd numbers in the array: "); 
    for (i = 0; i < sizeof(numbers) / sizeof(numbers[0]); ++i) { 
        if (numbers[i] % 2 != 0) { 
            printf("%d ", numbers[i]); 
        } 
    } 
    return 0; 
} 
