#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next;
};

struct Stack {
    Node *top;

    void init(){
        top = nullptr;
    }

    void push(int x){
        Node *new_node = new Node;
        new_node->data = x;
        new_node->next = top;
        top=new_node;
    }

    int pop(){
        if(top==nullptr){
            cout << "Stog je prazan." << endl;
            return -1;
        }
        int x = top->data;
        Node *temp = top;
        top=top->next;
        delete temp;
        return x;
    }

    int peek(){
        if(top==nullptr){
            cout << "Stog je prazan." << endl;
            return -1;
        }
        return top->data;
    }

    void print(){
        Node *temp = top;
        while(temp!=nullptr){
            cout << temp->data << endl;
            temp=temp->next;
        }
    }
};

int main() {
    Stack s;
    s.init();
    int niz[5] = {10,29,32,42,54};
    for (int i = 0; i < 5; i++)
    {
        s.push(niz[i]);
    }
    s.print();
    Stack r;
    r.init();
        for (int i = 0; i < 5; i++)
    {
        r.push(s.pop());
    }
    cout << "----------" <<endl;
    r.print();
    return 0;
}
