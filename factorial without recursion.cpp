#include <stdio.h> 
int main() { 
    int N,i; 
    printf("Enter a positive integer N: "); 
    scanf("%d", &N); 
    if (N < 0) { 
        printf("Please enter a non-negative integer.\n"); 
        return 1;  
    } 
    int factorial = 1; 
    for (i = 1; i <= N; ++i) { 
        factorial *= i; 
    } 
    printf("Factorial of %d: %d\n", N, factorial); 
    return 0; 
} 
