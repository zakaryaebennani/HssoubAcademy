#include <iostream>

using namespace std;
class Node
{
public:
    int value;
    Node* right;
    Node* left;
    Node(int value):value(value), right(nullptr), left(nullptr) {};
};
void preorder(Node * root)
{
    if (!root)
        return;
    cout << root->value << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root)
{
    if(!root)
        return;
    inorder(root->left);
    cout << root->value << " ";
    inorder(root->right);
}
void postorder(Node* root)
{
    if(!root)
        return ;
    postorder(root->left);
    postorder(root->right);
    cout << root->value << " ";
}
int main()
{
    Node *root = new Node(1);
	root->left			 = new Node(2);
	root->right		 = new Node(3);
	root->left->left	 = new Node(4);
	root->left->right = new Node(5);
	preorder(root);
	cout << endl ;
	inorder(root);
	cout << endl ;
	postorder(root);
	cout << endl ;
    return 0;
}
