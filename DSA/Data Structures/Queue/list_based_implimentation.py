# -*- coding: utf-8 -*-
"""
Created on Wed Jul 24 16:56:04 2024

@author: zakar
"""

class Queue :
    def __init__(self,capacity):
        self.__capacity = capacity
        self.__size = 0
        self.__head =self.__size
        self.__rear = capacity -1
        self.__queue = [None]*capacity
        
    def isempty(self):
            if(self.__size == 0):
                return True
            return False
        
    def isfull(self):
            if (self.__capacity == self.__size) :
                return True
            return False
        
    def Enqueue(self,e):
            if (self.isfull()):
                print("queue is full")
                return
            self.__rear = (self.__rear+1) % self.__capacity
            self.__size+=1
            self.__queue[self.__rear]=e
            
        
    def Dequeue(self):
        if (self.isempty()):
            print("the queue is empty")
            return
        self.__head = (self.__head+1) % self.__capacity
        self.__size -=1
            
        
    def head(self):
        return self.__queue[self.__head] if(self.__size !=0) else "empty queue"
        
    def rear(self):
        return self.__queue[self.__rear] if(self.__size !=0) else "empty queue"

q = Queue(2)

q.Enqueue(1)
q.Enqueue(2)
q.Enqueue(3)

print(q.isempty())
print(q.head())
print(q.rear())
q.Dequeue()
print(q.isempty())
print(q.head())
print(q.rear())
q.Dequeue()
print(q.isempty())
print(q.head())
print(q.rear())