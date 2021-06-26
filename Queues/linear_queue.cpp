#include<bits/stdc++.h>
using namespace std;

class Queue{
    int arr[10];
    int front;
    int rear;
    int size;

    public:
    Queue(){
        front = rear = size = 0;
    }

    int get_size(){
        return size;
    }

    void push(int ele){     //Enables to push an element to the Queue
         if(size == 10){
             cout<<"Queue overflow"<<endl;
             return;
         }
         if(rear == 10){
             cout<<"Queue Saturated"<<endl;
             return;
         }

         arr[rear] = ele;
         rear++;

         size++;

    }

    void pop(){               //Enables to pop an element from the Queue
        if(size == 0){
            cout<<"Queue Underflow"<<endl;
            return;
        }

        
        front++;
        size--;
    }

    int peek(){        //Enables to view,what is at the front of the Queue.
        if(size == 0){
            cout<<"Queue Empty"<<endl;
            return -1;
        }

        return arr[front];
    }


};

int main(){
    Queue q;
    for(int i = 1; i <=10; i++){
      q.push(i*10);
    }
    
    q.push(110);

    cout<<"Size of Queue is:"<<q.get_size()<<endl;

    
    for(int i = 1; i <=10; i++){
        cout<<q.peek()<<" ";
        q.pop();
    }

    cout<<endl;

     cout<<"Size of Queue is:"<<q.get_size()<<endl;

     q.push(10);

    return 0;
}




