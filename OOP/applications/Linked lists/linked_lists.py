# -*- coding: utf-8 -*-
"""
Created on Sat Jun 29 00:30:00 2024

@author: zakar
"""

class Node : 
    def __init__(self, data):
            self.data = data
            self.next = None
            
            
class SinglyLL:
    
    def __init__(self):
        self.head= None
        self.tail = None
        self.length= 0
        
        
    def push(self,data):
        if (self.head):
            self.tail.next = Node(data)
            self.tail = self.tail.next
        else:
            self.tail = Node(data)
            self.head = self.tail
        self.length+=1
            
    def printll(self):
        nover = self.head
        while (nover):
            print(nover.data, end = " ")
            nover=nover.next
        print()
            
        
    def pop(self):
        nover = self.head
        while(nover.next.next):
            nover = nover.next
        del self.tail
        self.tail = nover
        self.tail.next = None
        self.length -=1
        
    
    
    def insert(self,ind,data):
        if 0 < ind <= self.length:
            nover = self.head
            new = Node(data)
            for i in range(ind-1):
                nover = nover.next
            c=nover.next
            nover.next=new
            new.next = c
            self.length+=1
        elif ind ==0 :
            new = Node(data)
            new.next =self.head
            self.head = new
            self.length +=1
        else:
            raise IndexError()

    

    def remove(self,ind):
        if 0 < ind <= self.length :
            nover = self.head
            for i in range(ind-1):
                nover=nover.next
            h=nover.next.next
            del nover.next
            nover.next = h
            self.length-=1
        elif ind ==0:
            h= self.head.next
            del self.head
            self.head =h
            self.length -=1
        else :
            raise IndexError()
        
        
    def __len__(self):
        return self.length


llist = SinglyLL()
for i in range(7):
    llist.push(i)
llist.printll()

llist.remove(5)
llist.printll()

print(len(llist))