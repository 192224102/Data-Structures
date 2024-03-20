#include <stdio.h> 
#include <stdlib.h> 
struct TreeNode { 
    int val; 
    struct TreeNode* left; 
    struct TreeNode* right; 
}; 
void inorderTraversal(struct TreeNode* root) { 
    if (root != NULL) { 
        inorderTraversal(root->left); 
        printf("%d ", root->val); 
        inorderTraversal(root->right); 
    } 
} 
void postorderTraversal(struct TreeNode* root) { 
    if (root != NULL) { 
        postorderTraversal(root->left); 
        postorderTraversal(root->right); 
        printf("%d ", root->val); 
    } 
} 
int main() { 
    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode)); 
    root->val = 3; 
    root->left = (struct TreeNode*)malloc(sizeof(struct TreeNode)); 
    root->left->val = 9; 
    root->left->left = NULL; 
    root->left->right = NULL; 
    root->right = (struct TreeNode*)malloc(sizeof(struct TreeNode)); 
    root->right->val = 20; 
    root->right->left = (struct TreeNode*)malloc(sizeof(struct TreeNode)); 
    root->right->left->val = 15; 
    root->right->left->left = NULL; 
    root->right->left->right = NULL; 
    root->right->right = (struct TreeNode*)malloc(sizeof(struct TreeNode)); 
    root->right->right->val = 7; 
    root->right->right->left = NULL; 
    root->right->right->right = NULL; 
    printf("Inorder traversal: "); 
    inorderTraversal(root); 
    printf("\n"); 
    printf("Postorder traversal: "); 
    postorderTraversal(root); 
    printf("\n"); 
    free(root->left); 
    free(root->right->left); 
    free(root->right->right); 
    free(root->right); 
    free(root); 
    return 0;
}
