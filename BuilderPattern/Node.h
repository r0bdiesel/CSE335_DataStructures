
#ifndef NODE_H
#define NODE_H

#include <string>
#include <iostream>

class Node{
protected:
    string m_value;
    Node* m_leftChild;
    Node* m_rightChild;
public:
    Node(string value):m_value(value),m_leftChild(NULL),m_rightChild(NULL){}
    virtual ~Node(){
        if(!m_leftChild)delete m_leftChild;
        if(!m_rightChild)delete m_rightChild;
    }
    string getValue(){return m_value;}
    void setLeftChild(Node* left){m_leftChild=left;}
    void setRightChild(Node* right){m_rightChild=right;}
    Node* getLeftChild(){return m_leftChild;}
    Node* getRightChild(){return m_rightChild;}
    void print(){
        if(m_leftChild){
            cout<<"(";
            m_leftChild->print();
        }
        cout<<m_value;
        if(m_rightChild){
            m_rightChild->print();
            cout<<")";
        }
    }
    
};
#endif /* NODE_H */

