#include <iostream>
using namespace std;
#define    sz  10

int que[sz];
int frnt=-1,rear=-1;

void isEmpty()  {
    if(frnt==-1  &&  rear==-1)  {
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }

}

void enqueue(int val)  {
    if(rear==sz-1){
        cout<<"queue   id FULL"<<endl;
    }
    else if(frnt==-1  &&  rear==-1){
        rear=frnt=0;
        que[rear]=val;
    }
    else{
        rear++;
        que[rear]=val;
    }
}

void  dequeue()  {
    if(frnt==-1  &&  rear==-1) {
        cout<<"queue is empty u cant pop any value"<<endl;

    }
    else if(frnt==rear){
        frnt=rear=-1;
    }
    else{
        frnt++;
    }
}

void print()  {
    for(int i=frnt; i<=rear; i++) {
        cout<<que[i]<<" ";
    }
}
int main() {
    enqueue(5);
    dequeue();
    enqueue(10);
    enqueue(3);
    enqueue(4);
    isEmpty();
    dequeue();
    print();
    return 0;
}
