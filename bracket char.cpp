#include <stdio.h> 
#include <stdlib.h> 
#include <stdbool.h> 
int main() { 
    char input1[] = "()"; 
    char input2[] = "()[]{}"; 
    char input3[] = "(]"; 
    char input4[] = "([)]"; 
    char input5[] = "{[]}"; 
    char stack[100];   
    int top = -1; 
 int i; 
    #define PUSH(c) stack[++top] = (c) 
    #define POP() (top >= 0 ? stack[top--] : '\0') 
    bool isValid = true; 
    for (i = 0; input1[i] != '\0'; ++i) { 
        if (input1[i] == '(' || input1[i] == '{' || input1[i] == '[') { 
            PUSH(input1[i]); 
        } else if (input1[i] == ')' || input1[i] == '}' || input1[i] == ']') { 
            char topElement = POP(); 
            if ((input1[i] == ')' && topElement != '(') || 
                (input1[i] == '}' && topElement != '{') || 
                (input1[i] == ']' && topElement != '['))  
    { 
                isValid = false; // Mismatched brackets 
                break; 
            } 
        } 
    } 
    isValid = isValid && (top == -1); 
    printf("Output 1: %s\n", isValid ? "true" : "false"); 
    return 0; 
}
