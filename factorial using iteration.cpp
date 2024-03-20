#include <stdio.h> 
unsigned long long factorial(int n) { 
    if (n < 0) { 
        return 0;  
    } 
    unsigned long long result = 1; 
    int i; 
    for ( i = 1; i <= n; ++i) { 
        result *= i; 
    } 
    return result; 
} 
int main() { 
    int input = 3; 
    printf("Output: %llu\n", factorial(input)); 
    return 0; 
}
