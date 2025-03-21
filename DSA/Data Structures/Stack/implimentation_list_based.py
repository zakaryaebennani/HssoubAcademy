# -*- coding: utf-8 -*-
"""
Created on Thu Mar 20 19:54:21 2025

@author: zakar
"""

class Stack :
    def __init__(self):
        self.__list = []
    def isempty(self):
        print(True if len(self.__list) == 0 else False)

    def push(self,a):
        self.__list.append(a)

    def pop(self):
        self.__list.pop() if len(self.__list) > 0 else print("this stack is empty")
        
    def top(self):
        print( self.__list[-1] if len(self.__list) > 0 else "this stack is empty")

st =Stack()
st.push(8)
st.push(9)
st.top()
st.isempty()
st.pop()
st.pop()
st.isempty()
st.top()