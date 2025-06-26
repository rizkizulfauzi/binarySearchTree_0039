#include <iostream>
using namespace std;

class Node
{
    int info;
    Node *leftchild;
    Node *rightchild;

    //Constructor for the node class

Node(){
    leftchild = nullptr; //  instalalie left child to null
    rightchild = nullptr; // instalalie right child to null
}
};

class BinaryTree
{
    public:
    Node * ROOT;
    BinaryTree()
    {
        ROOT = nullptr; //instalasi ROOT to null
    }
};