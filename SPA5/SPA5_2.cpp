#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

struct List {
    Node* start;
    

    void print(){
        Node* temp = start;
        while (temp!=NULL)
        {
            cout << "Data: " << temp->data << endl;
            cout << "Current address: " << temp << endl;
            cout << "Next address: " << temp->next << endl;
            temp = temp->next;
        }
    }

    int length(){
        Node* temp = start;
        int counter = 0;
        while (temp!=NULL)
        {
            counter++;
            temp=temp->next;
        }

        return counter;
    }
};



int main(){
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // first = (Node*)malloc(sizeof(Node));
    // second = (Node*)malloc(sizeof(Node));
    // first= new Node();
    // second = new Node();
    first->data=5;
    first->next=second; 

    second->data=10;
    second->next=third;

    third->data=15;
    third->next=NULL;

    List* lista = new List();

    lista->start=first;

    cout << "Duljina liste: " << lista->length() << endl;

    return 0;
}