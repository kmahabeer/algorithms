class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


def createBinaryTree(nodes):
    def createTree(index):
        if index < len(nodes) and nodes[index] is not None:
            return TreeNode(
                nodes[index], createTree(2 * index + 1), createTree(2 * index + 2)
            )
        return None

    return createTree(0)


def countTotalNodes(root: TreeNode):
    if root is None:
        return 0
    return 1 + countTotalNodes(root.left) + countTotalNodes(root.right)


# This method would NOT work for an unbalanced binary tree
def printTree(root: TreeNode):
    numNodes = countTotalNodes(root)
    # def printTreeHelper(truncatedRoot, index, totalNodes):
    #   if index == totalNodes:
    #       break;
    #   # do stuff here
    #   printTreeHelper( , index++, totalNodes)
    # printTreeHelper( , i, numNodes)

    for i in range(0, numNodes):
        if i == 0:
            print("Root")
            print(root.val)
        elif (i - 1) % 2 == 0:
            print("Left")
            print(root.left.val)
        elif (i - 2) % 2 == 0:
            print("Right")
            print(root.right.val)


class Solution:
    def invertTree(self, root: TreeNode) -> TreeNode:
        if not root:
            return None

        temp = root.left
        root.left = root.right
        root.right = temp

        self.invertTree(root.left)
        self.invertTree(root.right)
        return root


if __name__ == "__main__":
    tree1 = createBinaryTree([4, 2, 7, 1, 3, 6, 9])
    print(tree1.right.left.val)
    printTree(tree1)

    invertedTree1 = Solution().invertTree(tree1)
