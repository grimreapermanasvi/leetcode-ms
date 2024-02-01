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
void postorderTraversalRecursive( struct TreeNode* root, int** arr, int* size) {
    if(root == NULL) {
        return;
    }
    
    postorderTraversalRecursive(root->left, arr, size);
    postorderTraversalRecursive(root->right, arr, size);
    *size += 1;
    *arr = (int*) realloc(*arr, *size * sizeof(int));
    (*arr)[*size - 1] = root->val;
    
}

int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int* arr = NULL;
    int size = 0;
    postorderTraversalRecursive(root, &arr, &size);
    *returnSize = size;
    return arr;
}
