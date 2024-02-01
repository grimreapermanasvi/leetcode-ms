/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void preorderTraversalRecursive( struct TreeNode* root, int** arr, int* size) {
    if(root == NULL) {
        return;
    }
    
    *size += 1;
    *arr = (int*) realloc(*arr, *size * sizeof(int));
    (*arr)[*size - 1] = root->val;
    
    preorderTraversalRecursive(root->left, arr, size);
    preorderTraversalRecursive(root->right, arr, size);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int* arr = NULL;
    int size = 0;
    preorderTraversalRecursive(root, &arr, &size);
    *returnSize = size;
    return arr;
}
