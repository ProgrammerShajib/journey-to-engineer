#include <bits/stdc++.h>
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Queue
{

    Node *qFront;
    Node *rear;

public:
    Queue()
    {

        qFront = NULL;
        rear = NULL;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty()
    {

        return qFront == NULL;
    }

    void enqueue(int data)
    {

        Node *newNode = new Node(data);

        if (qFront == NULL)
        {
            qFront = newNode;
            rear = newNode;
        }
        else
        {

            rear->next = newNode;
            rear = newNode;
        }
    }

    int dequeue()
    {

        if (isEmpty())
        {
            return -1;
        }

        Node *temp = qFront;
        int ans = temp->data;
        qFront = qFront->next;

        if (qFront == NULL)
        {
            rear = NULL;
        }

        delete temp;
        return ans;
    }

    int front()
    {

        if (isEmpty())
        {
            return -1;
        }

        return qFront->data;
    }
};