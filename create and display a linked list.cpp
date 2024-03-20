#include <stdio.h> 
#include <stdlib.h> 
struct ListNode { 
    int val; 
    struct ListNode* next; 
}; 
int main() { 
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode)); 
    head->val = 6; 
    head->next = (struct ListNode*)malloc(sizeof(struct ListNode)); 
    head->next->val = 7; 
    head->next->next = (struct ListNode*)malloc(sizeof(struct ListNode)); 
    head->next->next->val = 8; 
    head->next->next->next = (struct ListNode*)malloc(sizeof(struct ListNode)); 
    head->next->next->next->val = 9; 
    head->next->next->next->next = NULL; 
    printf("Nodes: "); 
    struct ListNode* current = head; 
    while (current != NULL) { 
        printf("%d", current->val); 
 
        if (current->next != NULL) { 
            printf("->"); 
        } 
        current = current->next; 
    } 
    printf("\n"); 
    current = head; 
    struct ListNode* next; 
    while (current != NULL) { 
        next = current->next; 
        free(current); 
        current = next; 
    } 
    return 0; 
} 
