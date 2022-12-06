#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};


void printList(Node* current){
    while (current!=NULL)
    {
        cout << "Data: " << current->data << endl;
        cout << "Current address: " << current << endl;
        cout << "Next address: " << current->next << endl;
        current = current->next;
    }
}


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

    printList(first);

    return 0;
}