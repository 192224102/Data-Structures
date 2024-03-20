#include <stdio.h> 
void bubbleSort(int arr[], int n) { 
    int temp; 
    for (int i = 0; i < n - 1; i++) { 
        for (int j = 0; j < n - i - 1; j++) { 
            if (arr[j] < arr[j + 1]) { 
                // Swap arr[j] and arr[j + 1] 
                temp = arr[j]; 
                arr[j] = arr[j + 1]; 
                arr[j + 1] = temp; 
            } 
        } 
    } 
} 
int main() { 
    int numbers[] = {4, 7, 9, 1, 2}; 
    int length = sizeof(numbers) / sizeof(numbers[0]); 
    bubbleSort(numbers, length); 
    printf("Output: "); 
    for (int i = 0; i < length; i++) { 
        printf("%d", numbers[i]); 
        if (i < length - 1) { 
            printf(","); 
        } 
    } 
    printf("\n"); 
    return 0; 
}
