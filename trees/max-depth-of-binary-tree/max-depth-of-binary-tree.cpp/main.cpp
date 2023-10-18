#include <iostream>
#include <vector>

// Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}  // constructor operator
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}  // constructor initialization lists
};

// Recursive function to create binary tree
TreeNode *createBinaryTree(const std::vector<int> &elements, int index = 0) {
  if (index >= elements.size() || elements[index] == -1) {
    return nullptr;
  }
  TreeNode *root = new TreeNode(elements[index]);
  root->left = createBinaryTree(elements, 2 * index + 1);
  root->right = createBinaryTree(elements, 2 * index + 2);
}

// Recursive solution
class Solution {
 public:
  int maxDepth(TreeNode *root) {
    if (root == NULL) {
      return 0;
    }
    int maxLeft = maxDepth(root->left);
    int maxRight = maxDepth(root->right);
    return std::max(maxLeft, maxRight) + 1;
  }
};

// Implementation
int main() {
  std::vector<int> list1{3, 9, 20, 1, 2, 15, 7};
  TreeNode *root1{createBinaryTree(list1)};
  int result{Solution().maxDepth(root1)};
  std::cout << result << std::endl;
  return 0;
}
