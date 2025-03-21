#include <iostream>
using namespace std;
class Node
{
public:
    int value;
    Node * left;
    Node * right;
    Node(int value): value(value), left(nullptr), right(nullptr)
    {}
};
class BST
{
private:
    Node* create_node(int value);
public:
    Node * root_node;
    BST(int value)
    {
    root_node = create_node(value);
    };
    
    void add_node(Node* root, int value);
    
    Node* delete_node(Node* root, int value);
    
    void DFS_inorder(Node* root);
    
    void deleteTree(Node* node) {
    if (node) {
        deleteTree(node->left);
        deleteTree(node->right);
        delete node;
        }
    }
    
    ~BST() {
    deleteTree(root_node);
    cout << "tree deleted";
    }


};
Node* BST::create_node(int value) {
    Node* node = new Node(value);
    if (!node) {
        throw std::bad_alloc();
    }
    return node;
}
void BST::add_node(Node* root, int value)
{
    if(!root)
    {
        root = create_node(value);
        return ;
    }
    if(root->value > value)
    {
        if(!root->left)
        {
            root->left = create_node(value);
            return;
        }
        BST::add_node(root->left, value);
    }
    else if(root->value < value)
    {
        if(!root->right)
        {
            root->right = create_node(value);
            return;
        }
        BST::add_node(root->right, value);
    }
    else
    {
        cout << "this node is existed in the BST";
    }
}
Node* BST::delete_node(Node* root, int value)
{
    if(!root) //base case
    {
        return root;
    }
    if (root->value > value)
    {
        root->left = BST::delete_node(root->left, value);
    }
    else if (root->value < value)
    {
        root->right = BST::delete_node(root->right, value);
    }
    else
    {
        if(!root->left)
        {
            Node * temp = root->right;
            delete root;
            return temp;
        }
        else if(!root->right)
        {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* temp = root->right;
        while(temp->left)
        {
            temp = temp->left;
        }
        root->value = temp->value;
        root->right = BST::delete_node(root->right, temp->value);
    }
    return root;
}
void BST::DFS_inorder(Node* root)
{
    if(!root)
        return;
    BST::DFS_inorder(root->left);
    cout << root->value << " ";
    BST::DFS_inorder(root->right);
}
int main()
{
    BST* bst6 = new BST(50);
    Node* a = bst6->root_node;
    bst6->add_node(a, 30);
    bst6->add_node(a, 70);
    bst6->add_node(a, 20);
    bst6->add_node(a, 40);
    bst6->add_node(a, 60);
    bst6->add_node(a, 80);

    bst6->DFS_inorder(a); // Expected: 20 30 40 50 60 70 80
    cout << endl;
    cout << "\nDelete 20 : ";
    bst6->delete_node(a, 20);
    bst6->DFS_inorder(a);
    cout << "\nDelete 30 : ";
    bst6->delete_node(a, 30);
    bst6->DFS_inorder(a);
    cout << "\nDelete 50 : ";
    bst6->delete_node(a, 50);
    bst6->DFS_inorder(a);
    return 0;
}
