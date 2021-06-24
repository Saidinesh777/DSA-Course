#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int data){
        this->data = data;
        next = nullptr;
        prev = nullptr;
    }
};

class Linkedlist{
    Node *head;
    Node *tail;
    public:
    int size;

    Linkedlist(){
        head = tail = nullptr;
        size = 0;
    }

    void push_end(int ele){
        Node *n = new Node(ele);
        if(tail == nullptr){
            head = tail = n;
            size = 1;
            return;
        }
        
        tail->next = n;
        n->prev = tail;
        tail = n;
        size++;
    }

    void push_front(int ele){
        Node *n = new Node(ele);
        if(head == nullptr){
            tail = head = n;
            size = 1;
            return;
        }
        
        head->prev = n;
        n->next = head;
        head = n;
        size++;
    }

    void pop_end(){
        if(tail == nullptr){
            cout<<"List underflow"<<endl;
            return;
        }
        if(head == tail){
            head = tail = nullptr;
            size = 0;
            return;
        }

        tail = tail->prev;
        tail->next = nullptr;

        size--;

    }

    void pop_front(){
        if(head == nullptr){
            cout<<"List Underflow"<<endl;
            return;
        }
        if(head == tail){
           head =  tail = nullptr;
        }
        head = head->next;
        head->prev = nullptr;
        size--;
    }

    int view_last(){
        if(tail == nullptr){
            cout<<"List Empty"<<endl;
            return -1;
        }

        return tail->data;
    }

    int view_front(){
        if(head == nullptr){
            cout<<"List Empty"<<endl;
            return -1;
        }
        return head->data;
    }

    void display_lst(){
        Node *p = head;
        while(p!= nullptr){
            cout<<p->data<<" ";
            p = p->next;
        }

        cout<<endl;
    }
};

class Stack{
    Linkedlist lst;
    public:

    void push(int ele){
        lst.push_end(ele);
    }

    void pop(){
        lst.pop_end();

    }

    int top(){
        return lst.view_last();
    }

    int size(){
        return lst.size;
    }
};

int main(){
   
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout<<"Size of List is:"<<s.size()<<endl;

    cout<<"Top element of stack is:"<<s.top()<<endl;

    s.pop();
    s.pop();

    cout<<"Top element of stack is:"<<s.top()<<endl;

    return 0;
}