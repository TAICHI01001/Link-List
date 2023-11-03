#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int value):data(value),next(NULL){}
};

class LinkList{
    public:
        Node *head;
        
        LinkList():head(NULL){}

        //! Create
        void append(int value){
            Node *newNode = new Node(value);
            if(!head){
                head = newNode;
            }else{
                Node *current = head;
                while(current->next){
                    current = current->next;
                }
                current->next = newNode;
            }
        }

        void print(){
            Node *current = head;
            while(current){
                cout<< current->data <<" next -> ";
                current = current->next;
            }
            cout<<"NULL \n";
        }
};

int main(){

    cout<<"------------------------------------------ \n";
    cout<<"We will learn the data structure Link_List \n";
    cout<<"------------------------------------------ \n";

    LinkList list;
    list.append(2);
    list.append(8);
    list.append(22);
    list.append(4);

    list.print();

}