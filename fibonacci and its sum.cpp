#include <stdio.h> 
int main() { 
    int n; 
    printf("Enter the number of terms in the Fibonacci series: "); 
    scanf("%d", &n); 
    int first = 0, second = 1, next, sum = 0; 
    printf("Fibonacci Series: "); 
    for (int i = 0; i < n; ++i) { 
        printf("%d ", first);  
        sum += first; 
        next = first + second; 
        first = second; 
        second = next; 
    } 
    printf("\nSum of the Fibonacci series: %d\n", sum); 
    return 0; 
}
