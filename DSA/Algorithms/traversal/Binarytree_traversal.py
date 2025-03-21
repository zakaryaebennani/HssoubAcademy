# -*- coding: utf-8 -*-
"""
Created on Sat Feb  8 17:41:08 2025

@author: zakar
"""

class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None
        
def preorder(root):
    if (not root):
        return
    print(root.value, end= " ")
    preorder(root.left)
    preorder(root.right)

def inorder(root):
    if (not root):
        return
    inorder(root.left)
    print(root.value, end = " ")
    inorder(root.right)

def postorder(root):
    if (not root):
        return
    postorder(root.left)
    postorder(root.right)
    print(root.value, end = " ")


root = Node(1) 
root.left = Node(2) 
root.right = Node(3) 
root.left.left = Node(4) 
root.left.right = Node(5) 

preorder(root)
print()
inorder(root)
print()
postorder(root)

