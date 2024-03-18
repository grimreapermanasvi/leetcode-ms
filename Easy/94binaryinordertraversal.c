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
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    struct TreeNode* stack[1000];
    int top = -1;
    struct TreeNode* node = root;
    int* inorder = (int*)malloc(1000 * sizeof(int));
    int count = 0;

     while (1) {
        while (node != NULL) {
            stack[++top] = node;
            node = node->left;
        }
        
        if (top == -1)
            break;
         node = stack[top--];
        inorder[count++] = node->val;
        node = node->right;
    }
    *returnSize = count;
    return inorder;
}