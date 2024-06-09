#include <iostream>
using namespace std;

template <typename T>
struct BSTNode
{
    T data;
    BSTNode<T>* left;
    BSTNode<T>* right;
    BSTNode(T val): data(val), left(nullptr), right(nullptr) {}
};

bool compareWithBST(BSTNode<int>* root, const int& val)
{
    if(root == nullptr) return false;
    if(root->data > val) return true;
    //In BST the right most node has the largest val
    return compareWithBST(root->right, val);
}


int main()
{
    BSTNode<int>* root = new BSTNode(10);
    root->left = new BSTNode(5);
    root->right = new BSTNode(14);
    root->left->right = new BSTNode(8);
    root->left->right->right = new BSTNode(9);
    root->right->left = new BSTNode(11);
    
    int val = 13;
    if(compareWithBST(root, val) == 1)
    {
        cout << "There is at least one value in the tree greater than the given value!"
             << endl;
    } else
    {
        cout << "There is no values in the tree greater than the given value"
             << endl;
    }
    
}





//void preOrderTraversal(BSTNode<int>* root)
//{
//    if(root)
//    {
//        cout << root->data << " ";
//        preOrderTraversal(root->left);
//        preOrderTraversal(root->right);
//    }
//}
