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

    bool isEmpty()
    {
        return ROOT == nullptr;
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

    void search(int element, Node *&parent,Node *&currentNode)
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

       void inorder(Node *ptr)
    {
        if(isEmpty())
        {
            cout << "tree is empty" << endl;
            return;
        }
        if(ptr == nullptr)
            return;

        inorder(ptr->leftchild);
        cout << ptr->info << " "; //parent
        inorder(ptr->rightchild);
    }

        void preorder(Node *ptr)
    {
        if(isEmpty())
        {
            cout << "tree is empty" << endl;
            return;
        }

        if(ptr == nullptr)
            return;
        
        cout << ptr->info << " ";
        preorder(ptr->leftchild);
        preorder(ptr->rightchild);
    }

    void postorder(Node *ptr)
    {
        if(isEmpty())
        {
            cout << "tree is empty" << endl;
            return;
        }

        if(ptr == nullptr)
        return;

        postorder(ptr->leftchild);
        postorder(ptr->rightchild);
        cout << ptr->info << " ";
    }

    bool isEmpty()
    {
        // check if the tree is empty
        return ROOT == nullptr;
    }

};

int main()
{
    BinaryTree x;
    while (true)
    {
        cout << "\nMenu" << endl;
        cout << "1. Implement insert operation" << endl;
        cout << "2. Perform inorder traversal" << endl;
        cout << "3. Perform preorder traversal" << endl;
        cout << "4. Perform postorder traversal" << endl;
        cout << "5. Exit" << endl;
        cout << "\nEnter your choice (1-5) : ";

        char ch;
        cin >> ch;
        cout << endl;

        switch (ch)
        {
        case '1':
        {
            x.insert();
            break;
        }
        case '2':
        {
            x.inorder(x.ROOT);
            break;
        }
        case '3':
        {

            x.preorder(x.ROOT);
            break;
        }
        case '4':
        {

            x.postorder(x.ROOT);
            break;
        }
        case '5':
            return 0;
        default:
        {
            cout << "Invalid option" << endl;
            break;
        }
    }
}
}