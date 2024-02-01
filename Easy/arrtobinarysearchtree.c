struct TreeNode* gentree(int* nums, int start, int end) {
    if (start > end) {
        return NULL;
    }

    struct TreeNode* node = malloc(sizeof(struct TreeNode));
    int mid = start + (end - start) / 2;
    node->val = nums[mid];
    node->left = gentree(nums, start, mid - 1);
    node->right = gentree(nums, mid + 1, end);

    return node;
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    return gentree(nums, 0, numsSize - 1);
}