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

        //update modify value
        bool update(int targetValue,int newValue){
            Node *current = head;
            while(current){
                if(current->data == targetValue){
                    current->data = newValue;
                    return true;
                }
                current = current->next;
            }
            return false; //* Value not found
        }

        bool remove(int targetValue){
            if(!head){
                return false;
            }

            if(head->data ==targetValue){
                Node *temp = head;
                head = head->next;
                delete temp;
                return true;
            }

            Node *current = head;
            while(current->next){
                if(current->next->data == targetValue){
                    Node *temp =current->next;
                    current->next = current->next->next;
                    delete temp;
                    return true;
                }
                current = current->next;
            }
            return false; // Value not found
        }

        ~LinkList() {
            while (head) {
                Node* temp = head;
                head = head->next;
                delete temp;
            }
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

    list.update(8,51);

    list.print();

    list.remove(4);
    
    list.print();

}