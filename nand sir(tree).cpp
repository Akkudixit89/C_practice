class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None
def inorder(root):
    if root:
        inorder(root.left) 
        print(root.value, end=" ")
        inorder(root.right)
def postorder(root):
    if root:
        postorder(root.left)
        postorder(root.right)
        print(root.value,end=" ")
def preorder(root):
    if root:
        print(root.value,end=" ")
        preorder(root.left)
        preorder(root.right)
root = Node(10)
root.left = Node(4)
root.right = Node(25)
root.left.left = Node(2)
root.left.right = Node(7)
root.right.left=Node(19)
root.right.right=Node(40)
root.left.left.right=Node(3)
root.left.right.left=Node(5)
root.right.left.right=Node(22)
root.right.right.left=Node(32)
print("Inorder Traversal of Tree:")
inorder(root)
print("\nPostorder traversal of tree:")
postorder(root)
print("\nPre order traveral of tree:")
preorder(root)


