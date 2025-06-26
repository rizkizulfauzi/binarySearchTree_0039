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

       // step 2 : assign value to the data field of new node

       newNode->info = x;

       //step 3 make the leftand right child of new node point
       newNode->leftchild = nullptr;
       newNode->rightchild = nullptr;

       // step 4 locate the node which will be the parent of the node
       Node *parent = nullptr;
       Node *currentNode = nullptr;
        search(x, parent, currentNode);
 
    }
};