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

//story class
class Story {
    //string description: the text representing what happens at this point in the game
    //int eventnumber: a unique identifier for each event
    //int lefteventnumber: the event number of the next event if the player chooses the left path
    //int righteventnumber: the event number of the next event if the player chooses the right path
};

//gamedecisiontree class template
template<typename T>
class GameDecisionTree {
    //method to load the story data from a file and create the tree
    //method to traverse the decision tree based on player input
};

//binarytreestructure class
class BinaryTreeStructure {
    //method to implement one exception where multiple events may lead to the same outcome
    //method to handle shared child nodes to the same memory location
};

//textbasedrpgwithexternalfileinput class
class TextBasedRPGWithExternalFileInput {
    //method to load the game story from a text file
    //method to start the game by loading events into a binary tree and allow player decisions
};

//mainfunction class
class MainFunction {
    //method to load file function to load the story into the decision tree
    //method to play game function to begin the game
};



