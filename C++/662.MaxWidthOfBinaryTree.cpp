/*/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };

class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
         if (!root) {
            return 0; // Return 0 if the tree is empty
        }

        // Initialize the maximum width
        int ans = 0;

        // Queue to hold nodes along with their position in the tree
        queue<pair<TreeNode*, unsigned long long>> q;
        // Push the root node with position 0
        q.push({root, 0});

        // Perform level-order traversal (BFS)
        while (!q.empty()) {
            // Get the number of nodes at the current level
            int size = q.size();
            // Get the minimum index at the current level
            unsigned long long mmin = q.front().second;
            
            // To store the first and last positions at each level
            unsigned long long first, last;

            for (int i = 0; i < size; i++) {
                // Get current node and its position
                unsigned long long cur_id = q.front().second - mmin;
                TreeNode* node = q.front().first;
                q.pop();

                // Set the first and last positions at the current level
                if (i == 0) {
                    first = cur_id; // The first node's position
                }
                if (i == size - 1) {
                    last = cur_id; // The last node's position
                }

                // Push the left child with position (2 * cur_id + 1)
                if (node->left) {
                    q.push({node->left, cur_id * 2 + 1});
                }
                
                // Push the right child with position (2 * cur_id + 2)
                if (node->right) {
                    q.push({node->right, cur_id * 2 + 2});
                }
            }

            // Calculate the width at the current level and update the maximum width
            ans = max(ans, static_cast<int>(last - first + 1));
        }

        // Return the maximum width of the binary tree
        return ans;
    }
};*/