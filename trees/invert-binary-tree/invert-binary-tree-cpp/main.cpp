#include <iostream>
#include <vector>

// Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

std::ostream &operator<<(std::ostream &os, const TreeNode &node) {
  return os << node.val << std::endl;
}

// Recursive function to create binary tree.
TreeNode *createBinaryTree(const std::vector<int> &elements, int index = 0) {
  if (index >= elements.size() || elements[index] == -1) {
    return nullptr;
  }

  TreeNode *root = new TreeNode(elements[index]);
  root->left = createBinaryTree(elements, 2 * index + 1);
  root->right = createBinaryTree(elements, 2 * index + 2);

  return root;
}

// Function to print out the binary tree.
void printBinaryTree(TreeNode *root) {
  if (root == nullptr) {
    return;
  }

  std::cout << root->val << " ";
  printBinaryTree(root->left);
  printBinaryTree(root->right);
}

// Function to delete the binary tree from memory.
void deleteBinaryTree(TreeNode *root) {
  while (root != nullptr) {
    TreeNode *temp = root;
    if (root->left) {
      root = root->left;
    }
    if (root->right) {
      root = root->right;
    }
    // temp->val = nullptr;
    delete temp;
  }
}

// Implement recursive solution.
class Solution {
 public:
  TreeNode *invertTree(TreeNode *root) {
    // Base case:
    if (root == NULL) return NULL;
    invertTree(root->left);
    invertTree(root->right);

    // Swap the nodes:
    TreeNode *temp{root->left};
    root->left = root->right;
    root->right = temp;
    return root;  // return the root
  }
};

int main() {
  std::vector<int> list1{4, 2, 7, 1, 3, 6, 9};
  TreeNode *root1{createBinaryTree(list1)};
  std::cout << "\nInput: " << std::endl;
  for (auto &&i : list1) {
    std::cout << i << " ";
  }
  TreeNode *result1{Solution().invertTree(root1)};
  std::cout << "\nOutput: " << std::endl;
  std::cout << *result1 << *result1->left << *result1->right
            << *result1->left->left << *result1->left->right
            << *result1->right->left << *result1->right->right << "\n"
            << std::endl;

  return 0;
}