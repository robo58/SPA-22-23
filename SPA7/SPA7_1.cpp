#include <iostream>

using namespace std;

struct Node {
    int val;
    Node *next;
};

struct Queue {
    Node *front;
    Node *rear;

    void init(){
        front = NULL;
        rear = NULL;
    }

    bool isEmpty(){
        return front==NULL && rear == NULL;
    }

    void addNode(Node *node)
    {
        if (rear == NULL)
        {
            rear = node;
            front = node;
        }
        else
        {
            rear->next= node;
            rear = node;
        }
    }

    void enqueue(int val){
        Node *newNode = new Node();
        newNode->val = val;
        newNode->next = NULL;
        addNode(newNode);
    }

    int dequeue(){
        if(isEmpty()){
            cout << "Red je prazan!" << endl;
            return -1;
        }
        int returnVal = front->val;
        front = front->next;
        return returnVal;
    }

    void print(){
        Node *temp = front;
        while (temp != NULL)
        {
            cout << temp->val << ", ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){

    Queue *red = new Queue();

   cout << "isEmpty prije: " <<  red->isEmpty() << endl;;

    red->enqueue(10);
    red->enqueue(12);
    red->enqueue(155);

   cout << "isEmpty poslije: " <<  red->isEmpty() << endl;;


    red->dequeue();

    red->print();

    return 0;
}