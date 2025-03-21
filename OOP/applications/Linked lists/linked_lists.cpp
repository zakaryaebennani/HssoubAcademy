#include <iostream>
using namespace std;

class Node{
    public :
    int data;
    Node *next;
    Node(int a):data(a)
    {
        next = nullptr;
    }
};

class SinglyLinkedlist {
public :
    Node *head;
    Node *tail;
    int llsize=1;

    SinglyLinkedlist(int a){
        tail = new Node(a);
        head = tail;
    }

    void push(int a){
        Node *newnode = new Node(a);
        if (head){
            this->tail->next = newnode;
            this->tail = newnode;
        }
        else{
            this->head= newnode;
            this->tail= newnode;
        }
        this->llsize++;
    }


    void pop(){
        if (this->llsize > 1){
            Node *p = this->head;

            while(p->next != this->tail)
            {
                p=p->next;
            }
            delete this->tail;
            p->next=nullptr;
            this->tail = p;
            this->llsize--;
        }
        else if (this->llsize ==1){
                delete this->tail;
                this->head = nullptr;
                this->tail = nullptr;
                this->llsize--;
                }
        else{cout << "linkedlist is empty";}
    }

    void sizell()
    {
        cout << this->llsize <<endl;
    }

    void printll(){
    Node *p=this->head;
    if(this->llsize == 0){cout << "empty linked list"<<endl;}
    else
    {
    while(p)
            {
                cout << p->data  << " ";
                p=p->next;
            }
        cout <<endl;
    }
}
};

int main()
{
    SinglyLinkedlist kk(0);
    kk.push(1);
    kk.push(2);
    kk.push(3);
    kk.sizell();
    kk.printll();
    cout << (kk.head->next)->data;
    return 0;
}
