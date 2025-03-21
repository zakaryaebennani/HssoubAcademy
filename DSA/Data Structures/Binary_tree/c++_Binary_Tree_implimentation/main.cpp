#include <iostream>
#include<queue>
using namespace std;
class node{
public :
    int value;
    node * nextleft;
    node * nextright;

    node(int value): value(value)
    {
    nextleft = nullptr;
    nextright = nullptr;
    };
};
node* addleft(node* parent, int value)
{
    node* temp = new node(value);
    parent->nextleft = temp;
    return temp;
}
node* addright(node* parent, int value)
{
    node* temp = new node(value);
    parent->nextright = temp;
    return temp;
}
int main()
{
    node* root = new node(1);
    node* left1 = addleft(root, 2);
    node* right1 = addright(root, 3);
    node* left2 = addleft(left1, 4);
    node* right2 = addright(left1, 5);
    node* left3 = addleft(right1,6);
    queue<node*> q;
    q.push(root);

    //BFS traversal
    while(!q.empty())
    {
        node* parent = q.front();
        q.pop();
        cout << parent->value << " ";
        if(parent->nextleft)
            q.push(parent->nextleft );
        if(parent->nextright)
            q.push(parent->nextright);
    }
    
    //free the memory
    delete left3;
    delete right2;
    delete left2;
    delete right1;
    delete left1;
    delete root;
    return 0;
}
