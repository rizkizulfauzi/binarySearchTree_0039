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
 
        // step 5 if parentis null

        if (parent == nullptr)
        {
        //5a :mark the newNode as ROOT
            ROOT = newNode;

        //5b : exit
        return;
        }

        // step 6 if the value in the data field of new node is less than that of parent

        if (x <parent->info)
        {
            //6a
            parent->leftchild = newNode;
            //6b exit
            return;
        }

        //step 7 if the value in the data field of the new node is greater than that of the parent
        else if(x> parent->info)
        {
            //7a
            parent->rightchild = newNode;
            //7b 
            return;
        }
    }

    void search()
    {
        // this function the searches the current node of the specified node as
        currentNode = ROOT;
        parent = nullptr;
        while((currentNode != nullptr) && (currentNode->info != element))
        {
            parent = currentNode;
            if(element < currentNode->info)
                currentNode = currentNode->leftchild;
            else
                currentNode = currentNode->rightchild;
        }
    }

};