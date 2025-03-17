#include <iostream>

//Node Class
template <typename T>
class Node{ //template  meaning that it accepts any data type

public: //can be accessed anywhere

    T *value; //type t, pointer to "value"

    Node<T> * left; //node pointing to the left child
    Node<T> * right; //node pointing to the right child



    Node(T *value) //makes a new node object
    {
        this->value = value; //stores the pointer to "value"
        this->left = nullptr; //means that the node does not have a left child
        this->right = nullptr; //means that the node does not have a right child
    }

    void print()
    {
        value->print();
    }
};

