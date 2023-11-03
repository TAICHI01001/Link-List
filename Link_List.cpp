#include <iostream>

using namespace std;

class Node{
    int data;
    Node *next;

    Node(int value):data(value),next(NULL){}
};

class LinkList{
    public:
        Node *head;
        
        LinkList():head(NULL){}

        void append(int value){
            Node *newNode = new Node(value);
            if(!head){
                head = newNode;
            }else{
                Node *current = head;
                While(current->next){
                    current = current->next;
                }
                current->next = newNode;
            }
        }
};

int main(){
    cout<<"We will learn the data structure Link_List";
}