#include <stdio.h> 
#include <string.h> 
int main() { 
    char s[100]; 
 int i,j; 
    printf("Enter a string: "); 
    scanf("%s", s); 
    int len = strlen(s); 
    for (i = 0; i < len - 1; i++) { 
        for (j = 0; j < len - i - 1; j++) { 
            if (s[j] > s[j + 1]) { 
                char temp = s[j]; 
                s[j] = s[j + 1]; 
                s[j + 1] = temp; 
            } 
        } 
    } 
    // Find the starting index of repeated characters 
    int startingIndex = -1; 
    for (i = 0; i < len - 1; i++) { 
        if (s[i] == s[i + 1]) { 
            startingIndex = i; 
            break; 
        } 
    } 
    printf("Sorted String: %s\n", s); 
    if (startingIndex != -1) { 
        printf("Starting Index of Repeated Character: %d\n", startingIndex); 
    } else { 
        printf("No repeated characters found.\n"); 
    } 
} 
