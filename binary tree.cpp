#include <iostream>
#include <limits>

using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int maxSum = numeric_limits<int>::min();
        maxPathSumRecursive(root, maxSum);
        return maxSum;
    }

private:
    int maxPathSumRecursive(TreeNode* node, int& maxSum) {
        if (node == nullptr) return 0;
        
        int leftSum = max(0, maxPathSumRecursive(node->left, maxSum));
        int rightSum = max(0, maxPathSumRecursive(node->right, maxSum));
        maxSum = max(maxSum, leftSum + rightSum + node->val);
        return max(leftSum, rightSum) + node->val;
    }
};

int main() {
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(2);
    root->right = new TreeNode(10);
    root->left->left = new TreeNode(20);
    root->left->right = new TreeNode(1);
    root->right->right = new TreeNode(-25);
    root->right->right->left = new TreeNode(3);
    root->right->right->right = new TreeNode(4);

    Solution solution;
    cout << "Maximum path sum: " << solution.maxPathSum(root) << endl
    delete root->right->right->right;
    delete root->right->right->left;
    delete root->right->right;
    delete root->right;
    delete root->left->right;
    delete root->left->left;
    delete root->left;
    delete root;

    return 0;
}

