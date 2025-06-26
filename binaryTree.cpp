#include <iostream>
using namespace std;

class Node
{
public:
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

    void insert()
    {
        int x;
        cout << "Masukan nilai:";
        cin >> x;

        // step 1 :alocatee memory for the new node
       Node *newNode = new Node();

    }
};