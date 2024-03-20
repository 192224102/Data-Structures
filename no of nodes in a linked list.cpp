#include<stdio.h> 
#include<stdlib.h> 
struct ListNode { 
    int val; 
    struct ListNode* next; 
}; 
int countNodes(struct ListNode* head) { 
    int count = 0; 
    struct ListNode* current = head; 
    while (current != NULL) { 
        count++; 
        current = current->next; 
    } 
    return count; 
} 
int main() { 
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode)); 
    head->val = 1; 
    head->next = (struct ListNode*)malloc(sizeof(struct ListNode)); 
    head->next->val = 2; 
    head->next->next = (struct ListNode*)malloc(sizeof(struct ListNode)); 
    head->next->next->val = 3; 
    head->next->next->next = (struct ListNode*)malloc(sizeof(struct ListNode)); 
    head->next->next->next->val = 5; 
    head->next->next->next->next = (struct ListNode*)malloc(sizeof(struct ListNode)); 
    head->next->next->next->next->val = 8; 
    head->next->next->next->next->next = NULL; 
    int result = countNodes(head); 
    printf("Number of nodes: %d\n", result); 
     struct ListNode* current = head; 
    struct ListNode* next; 
    while (current != NULL) { 
        next = current->next; 
        free(current); 
        current = next; 
    } 
    return 0; 
}
