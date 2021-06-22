#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        next = nullptr;
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
        Node *p = head;

        while(p->next!= tail){
            p = p->next;
        }

        p->next = nullptr;
        tail = p;
        size--;

    }

    void pop_front(){
        if(head == nullptr){
            cout<<"List Underflow"<<endl;
            return;
        }
        head = head->next;
        size--;

        if(head == nullptr){
            tail = nullptr;
        }
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

int main(){
    Linkedlist lst;
    lst.push_end(10);
    lst.push_end(20);
    lst.push_end(30);
    lst.push_end(40);

    cout<<"Size of List is:"<<lst.size<<endl;

    lst.push_front(50);
    lst.push_front(60);

    cout<<"First element of the list is:"<<lst.view_front()<<endl;
    cout<<"Last element of  the list is:"<<lst.view_last()<<endl;

    lst.display_lst();

    lst.pop_end();
    lst.pop_front();

    lst.display_lst();

    return 0;
}