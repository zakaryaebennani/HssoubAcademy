# -*- coding: utf-8 -*-
"""
Created on Wed Feb  5 12:54:04 2025

@author: zakar
"""

class Node :
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

    def addleft(self, left):
        self.left = Node(left)
        return self.left

    def addright(self, right):
        self.right = Node(right)
        return self.right

root = Node(1)
n_left1 = root.addleft(2)
n_right1 = root.addright(3)
n_left2 = n_left1.addleft(4)
n_right2 = n_left1.addright( 5)
n_left3 = n_right1.addleft( 6)

#BFS 
queue=[root]
while queue:
    parent = queue.pop(0)
    print(parent.value, end = " ")
    if(parent.left):
        queue.append(parent.left)
    if(parent.right):
        queue.append(parent.right)
    
    