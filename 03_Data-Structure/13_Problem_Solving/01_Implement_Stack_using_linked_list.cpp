#include <iostream>
using namespace std;

// ১. নোড ক্লাস - এটি আমাদের চেইনের প্রতিটি লিঙ্ক তৈরি করবে
class Node
{
public:
    int data;
    Node *next;

    // ডিফল্ট কনস্ট্রাক্টর
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }

    // ভ্যালু সহ কনস্ট্রাক্টর
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// ২. স্ট্যাক ক্লাস - যেখানে আমরা সব লজিক হ্যান্ডেল করবো
class Stack
{
    // এই ভেরিয়েবলগুলো private (বাইরের কেউ সরাসরি এক্সেস করতে পারবে না)
    Node *head;
    int size;

public:
    // কনস্ট্রাক্টর: স্ট্যাক তৈরি হওয়ার সময় কল হবে
    Stack()
    {
        head = NULL;
        size = 0;
    }

    // স্ট্যাকের বর্তমান সাইজ কত?
    int getSize()
    {
        return size;
    }

    // স্ট্যাক কি খালি?
    bool isEmpty()
    {
        return size == 0;
    }

    // নতুন এলিমেন্ট পুশ করা (LIFO অনুযায়ী শুরুতে)
    void push(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        size++;
        cout << "Pushed: " << data << endl;
    }

    // ওপরের এলিমেন্ট বের করে দেওয়া
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty! Cannot pop." << endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        cout << "Popped: " << temp->data << endl;
        delete temp; // মেমোরি ফ্রি করে দেওয়া (FAANG লেভেল প্র্যাকটিস)
        size--;
    }

    // ওপরের এলিমেন্টটি দেখা (রিটার্ন করা)
    int getTop()
    {
        if (isEmpty())
        {
            return -1;
        }
        
        return head->data;
    }
};

// ৩. মেইন ফাংশন - যেখানে আমরা আমাদের স্ট্যাক টেস্ট করবো
int main()
{
    // আমাদের স্ট্যাকের একটি অবজেক্ট তৈরি করছি
    Stack s;

    // টেস্ট কেস ১: পুশ করা
    s.push(10);
    s.push(20);
    s.push(30);

    // টেস্ট কেস ২: বর্তমান অবস্থা দেখা
    cout << "Current Top: " << s.getTop() << endl; // আউটপুট: ৩০
    cout << "Stack Size: " << s.getSize() << endl; // আউটপুট: ৩

    // টেস্ট কেস ৩: পপ করা
    s.pop();
    cout << "Top after pop: " << s.getTop() << endl; // আউটপুট: ২০

    // টেস্ট কেস ৪: খালি হওয়া পর্যন্ত পপ করা
    s.pop();
    s.pop();

    if (s.isEmpty())
    {
        cout << "Stack is now empty!" << endl;
    }

    return 0;
}