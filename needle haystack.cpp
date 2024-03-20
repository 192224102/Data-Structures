#include <stdio.h> 
#include <string.h> 
int main() { 
    char haystack[] = "hello world"; 
    char needle[] = "world"; 
    int hayLen = strlen(haystack); 
    int needleLen = strlen(needle); 
    int index = -1; 
    if (needleLen <= hayLen) { 
        for (int i = 0; i <= hayLen - needleLen; ++i) { 
            int j; 
            for (j = 0; j < needleLen; ++j) { 
                if (haystack[i + j] != needle[j]) { 
                    break; 
                } 
            } 
            if (j == needleLen) { 
                index = i; // Match found at index i 
                break; 
            } 
        } 
    } 
    if (index != -1) { 
        printf("Substring found at index: %d\n", index); 
    } else { 
        printf("Substring not found\n"); 
    } 
    return 0; 
}
