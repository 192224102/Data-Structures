#include<stdio.h> 
int main() { 
    int n, i, term1 = 0, term2 = 1, nextTerm, sum = 0; 
    printf("Enter the number of terms in Fibonacci series: "); 
    scanf("%d", &n); 
    printf("Fibonacci Series:\n"); 
    for (i = 0; i < n; i++) { 
        printf("%d ", term1); 
        sum += term1; 
        nextTerm = term1 + term2; 
        term1 = term2; 
        term2 = nextTerm; 
    } 
    printf("\nSum of the Fibonacci Series: %d\n", sum); 
    return 0; 
} 
