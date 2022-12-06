#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

struct List
{
    Node *start;

    void addToStart(Node *node){
        node->next = start;
        start=node;
    }

    void addNode(Node *node)
    {
        if (start == NULL)
        {
            start = node;
        }
        else
        {
            Node *temp = start;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = node;
        }
    }

    void add(int val)
    {
        Node *newNode = new Node();
        newNode->data = val;
        newNode->next = NULL;
        // addNode(newNode);
        addToStart(newNode);
    }

    void addMany(int values[], int length)
    {
        for (int i = 0; i < length; i++)
        {
            add(values[i]);
        }
    }

    void removeNode(Node *node)
    {
        if (start == node)
        {
            start = start->next;
        }
        else
        {
            Node *temp = start;

            while (temp->next != node)
            {
                temp = temp->next;
            }
            temp->next = node->next;

            free(node);
        }
    }

    void remove(int val)
    {
        Node *temp = start;

        while (temp->data != val)
        {
            temp = temp->next;
        }
        removeNode(temp);
    }

    void print()
    {
        Node *temp = start;
        while (temp != NULL)
        {
            cout << temp->data << ", ";
            temp = temp->next;
        }
        cout << endl;
    }

    int length()
    {
        Node *temp = start;
        int counter = 0;
        while (temp != NULL)
        {
            counter++;
            temp = temp->next;
        }

        return counter;
    }
};

int main()
{
    List *lista = new List();

    lista->add(1);
    lista->add(5);

    cout << "Duljina liste: " << lista->length() << endl;
    lista->print();

    return 0;
}