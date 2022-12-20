#include <iostream>

#define MAX_SIZE 100

struct Stack {
    int data[MAX_SIZE];
    int top;
};

void push(struct Stack *s, int x) {
    if (s->top == MAX_SIZE - 1) {
        std::cout << "Error: Stack is full" << std::endl;
        return;
    }
    s->top++;
    s->data[s->top] = x;
}

int pop(struct Stack *s) {
    if (s->top == -1) {
        std::cout << "Error: Stack is empty" << std::endl;
        return -1;
    }
    int x = s->data[s->top];
    s->top--;
    return x;
}

int peek(struct Stack *s) {
    if (s->top == -1) {
        std::cout << "Error: Stack is empty" << std::endl;
        return -1;
    }
    return s->data[s->top];
}

int main() {
    Stack s;
    s.top = -1;
    push(&s, 5);
    push(&s, 10);
    std::cout << "Top element is " << peek(&s) << std::endl;
    std::cout << "Popped element is " << pop(&s) << std::endl;
    std::cout << "Top element is " << peek(&s) << std::endl;
    return 0;
}
