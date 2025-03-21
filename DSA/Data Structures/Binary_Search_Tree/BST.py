# -*- coding: utf-8 -*-
"""
Created on Sat Feb  8 19:40:21 2025

@author: zakar
"""

class Treenode:
    def __init__(self, data):
        self.value = data
        self.right = None
        self.left = None

class BST:
    def __init__(self, root_data):
        self.__root = Treenode(root_data)
    
    @property
    def root(self):
        return self.__root

    def add_node(self, root, node):
        #handles the base case : root
        if(not root):
            root = node
            return

        if (node.value < root.value):
            if (not root.left):
                root.left = node
                return
            self.add_node(root.left, node)
        elif(node.value > root.value):
            if (not root.right):
                root.right = node
                return
            self.add_node(root.right, node)
        else :
            print(f"{node.value} : already exist ")
            return
        

    def delete_node(self, root, node):
        #base case
        if (root is None):
            return root
        
        if (root.value > node.value):
            root.left = self.delete_node(root.left, node)

        elif (root.value < node.value):
            root.right = self.delete_node(root.right, node)

        else:
            if(root.left is None):
                temp = root.right
                root = None
                return temp
                
            elif(root.right is None):
                temp = root.left
                root = None
                return temp
            temp = root.right
            while(temp.left):
                temp = temp.left
            root.value = temp.value
            root.right = self.delete_node(root.right, temp)
            
        return root

    def __inorder(self,root, l):
        if (not root):
            return
        self.__inorder(root.left,l)
        l.append(root.value)
        self.__inorder(root.right,l)

    def __str__(self):
        l = list()
        self.__inorder(self.__root,l)
        a= " ".join(map(lambda x : str(x) ,l))
        return a
    
    
bst6 = BST(50)
a= bst6.root
bst6.add_node(a, Treenode(30))
bst6.add_node(a, Treenode(70))
bst6.add_node(a, Treenode(20))
bst6.add_node(a, Treenode(40))
bst6.add_node(a, Treenode(60))
bst6.add_node(a, Treenode(80))

print("Before deletion:", bst6)  # Expected: 20 30 40 50 60 70 80


print("\nDelete 20")
bst6.delete_node(a, Treenode(20)) 

print(bst6) 

print ("\nDelete 30")
bst6.delete_node(a, Treenode(30)) 

print(bst6)

print ("\nDelete 50")
bst6.delete_node(a, Treenode(50)) 

print(bst6)
