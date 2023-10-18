#include <stdio.h>
#include <stdlib.h>

// Definition for a binary tree node.
struct TreeNode
{
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

struct TreeNode *invertTree(struct TreeNode *root)
{
  if (root == NULL)
    return NULL;
  struct TreeNode *temp = root->left;
  root->left = invertTree(root->right);
  root->right = invertTree(temp);

  return root;
}

void printTree(struct TreeNode *root)
{
  if (root == NULL)
    return;
  printf("%d ", root->val);
  printTree(root->left);
  printTree(root->right);
}

int main()
{
  // Create the tree: [4,2,7,1,3,6,9]
  struct TreeNode *root = (struct TreeNode *)malloc(sizeof(struct TreeNode));
  root->val = 4;
  root->left = (struct TreeNode *)malloc(sizeof(struct TreeNode));
  root->left->val = 2;
  root->left->left = (struct TreeNode *)malloc(sizeof(struct TreeNode));
  root->left->left->val = 1;
  root->left->right = (struct TreeNode *)malloc(sizeof(struct TreeNode));
  root->left->right->val = 3;
  root->right = (struct TreeNode *)malloc(sizeof(struct TreeNode));
  root->right->val = 7;
  root->right->left = (struct TreeNode *)malloc(sizeof(struct TreeNode));
  root->right->left->val = 6;
  root->right->right = (struct TreeNode *)malloc(sizeof(struct TreeNode));
  root->right->right->val = 9;

  printTree(root);
  printf("\n");

  // Invert the tree
  root = invertTree(root);

  printf("Inverted Tree: ");
  // printf("%d", (int *)root);
  printTree(root);
  printf("\n");

  // Free the dynamically allocated memory
  free(root->right->right);
  free(root->right->left);
  free(root->right);
  free(root->left->right);
  free(root->left->left);
  free(root->left);
  free(root);

  return 0;
}