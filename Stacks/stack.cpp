#include<bits/stdc++.h>
using namespace std;

class Stack{
    int arr[50];
    int top_idx;
    public:
    Stack(){
        top_idx = -1;
    }

    int size(){
        return top_idx+1;
    }

    void push(int ele){
        if(top_idx == 49){
            // cout<<"Stack Overflow"<<endl;
            // return;
            throw "Stack Overflow";
        }
        arr[++top_idx] = ele;
    }

    void pop(){
        if(top_idx == -1){
            // cout<<"Stack Underflow"<<endl;
            // return;
            throw " Stack Underflow";
        }
        top_idx--;
    }

    int top(){
        if(top_idx == -1){
            // cout<<"Stack Empty"<<endl;
            // return;
            throw "Stack Empty";
        }
        return arr[top_idx];
    }

};
int main(){
    Stack s;

    cout<<"Size:"<<s.size()<<endl;

    s.push(10);
    s.push(20);
    s.push(30);

    cout<<"Size:"<<s.size()<<endl;

    cout<<s.top()<<endl;
    s.pop();

    cout<<s.top()<<endl;
    s.pop();

    cout<<s.top()<<endl;
    s.pop();

    cout<<s.top();

    return 0;
    
}