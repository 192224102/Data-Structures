class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

def buildTree(preorder, inorder):
    if not preorder or not inorder:
        return None
    
#The first element of preorder is the root
    root_val = preorder[0]
    root = TreeNode(root_val)
    
    # Find the index of root in inorder array
    root_index = inorder.index(root_val)
    
    # Recursively build left and right subtrees
    root.left = buildTree(preorder[1:root_index + 1], inorder[:root_index])
    root.right = buildTree(preorder[root_index + 1:], inorder[root_index + 1:])
    
    return root

def printTree(root):
    if root:
        print(root.val, end=" ")
        printTree(root.left)
        printTree(root.right)

# Example usage
preorder = [3,9,20,15,7]
inorder = [9,3,15,20,7]
root = buildTree(preorder, inorder)
printTree(root)

