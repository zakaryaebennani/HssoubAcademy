# -*- coding: utf-8 -*-
"""
Created on Thu Mar 20 20:25:03 2025

@author: zakar
"""

class Node:
    def __init__(self,data):
        self.data=data
        self.next = None

class Stack:
    def __init__(self):
        self.root =None
        
    def push(self,data):
        last_node = Node(data)
        if (not self.root):
            self.root = last_node
            return
        last_node.next = self.root
        self.root = last_node


    def pop(self):
        if(not self.top):
            print("The stack is empty")
            return
        temp = self.root.data
        self.root =self.root.next
        return temp
        
    def isempty(self):
        if(not self.root):
            print(True)
            return
        print(False)
        
    def top(self):
        print(self.root.data if self.root else "The stack is empty")

st =Stack()
st.push(8)
st.push(9)
st.top()
st.isempty()
print(st.pop())
print(st.pop())
st.isempty()
st.top()