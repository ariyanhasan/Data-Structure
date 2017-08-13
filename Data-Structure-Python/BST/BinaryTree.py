
class Node:
    def __init__(self,value):
        self.value = value
        self.left = None
        self.right = None

class BinaryTree:

    def __init__(self):
        self.root = None

########### INSERT NODE ###########

    def insert(self, value):

        if(self.root == None):
            self.root = Node(value)
        else:
            self._insert(value, self.root)


    def _insert(self, value, node):

        if(value < node.value):

            if(node.left != None):
                self._insert(value, node.left)

            else:
                node.left = Node(value)

        else:

            if(node.right != None):

                self._insert(value, node.right)
            else:
                node.right = Node(value)

    # END _insert

########### DISPLAY TREE ###########

    def PrintTree(self):
        if(self.root != None):
            self._PrintTree(self.root)

    def _PrintTree(self, node):
        if(node != None):
            self._PrintTree(node.left)
            print(str(node.value) + ' ')
            self._PrintTree(node.right)

if __name__=="__main__":
    bt=BinaryTree()

    n = int(input("Enter number of value for add: "))

    for i in range(n):
        j = int(input(">> "))
        bt.insert(j)

    bt.PrintTree()
    