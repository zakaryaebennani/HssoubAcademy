#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node * next;
    Node(int data):data(data),next(nullptr)
    {}
};

class Stack
{
public :
    Node *root;
    Stack()
    {
    this->root = nullptr;
    }
    void push(int data)
    {
        Node *last = new Node(data);
        if (!this->root)
            {
                this->root = last;
            }
        else
            {
                last->next = this->root;
                this->root = last;
            }
    }
    int pop()
    {
        if (!this->root)
            {
                cout << "stack is empty" << ": ";
                return INT_MIN;
            }
        else
            {
                Node *temp = this->root;
                this->root = this->root->next;
                int popped = temp->data;
                delete temp;
                return popped;
            }
    }
    void isempty()
    {
        if (!this->root)
            {
                cout << "true" << endl;
            }
        else
            {
                cout << "false" << endl;
            }
    }
    int top()
    {
        if (!this->root)
            {
                cout << "this stack is empty"<< ": ";
                return INT_MIN;
            }
        else
            {
                return this->root->data;
            }
    }
    ~Stack()
    {
        Node *current = this->root;
        Node * nextnode = current ? current->next : nullptr;
        while(current)
        {
            delete current;
            current = nextnode;
            if (nextnode) nextnode = nextnode->next;

        }
        cout <<"This Stack is deleted" << endl;
    }
};

int main()
{
    Stack st;
    st.push(8);
    st.push(9);
    cout << st.top() << endl;
    st.isempty();
    cout << st.pop() << endl;
    cout << st.pop() << endl;
    st.isempty();
    cout << st.top() << endl;
    return 0;
}
