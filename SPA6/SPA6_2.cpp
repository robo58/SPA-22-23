#include <iostream>

#define MAX_SIZE 100

struct Stack {
    int data[MAX_SIZE];
    int top;

    void init(){
        top=-1;
    }

    void push(int x) {
        if (top == MAX_SIZE - 1) {
            std::cout << "Error: Stack is full" << std::endl;
            return;
        }
        top++;
        data[top] = x;
    }

    int pop() {
        if (top == -1) {
            std::cout << "Error: Stack is empty" << std::endl;
            return -1;
        }
        int x = data[top];
        top--;
        return x;
    }

    int peek() {
        if (top == -1) {
            std::cout << "Error: Stack is empty" << std::endl;
            return -1;
        }
        return data[top];
    }
};



int main() {
    Stack* s = new Stack;
    s->init();
    s->push(5);
    s->push(10);
    std::cout << "Top element is " << s->peek() << std::endl;
    std::cout << "Popped element is " << s->pop() << std::endl;
    std::cout << "Top element is " << s->peek() << std::endl;
    return 0;
}
