#include <iostream>
using namespace std;
#define    sz 10
int top=-1;
int st[sz];

void push(int val)  {
    top=top+1;
    if(top>=sz){
        cout<<"stack is over flow"<<endl;
    }
    else{
        st[top]=val;
    }

}

void pop()  {

    if(top==-1)  {

        cout<<"stack is empty"<<endl;
    }
    else{
          top--;
    }

}
void topElement() {

    if(top==-1)  {

        cout<<"stack is empty"<<endl;
    }
    else{
         cout<<"top element "<<st[top]<<endl;
    }
}

void checkEmpty(){

    if(top==-1) {
        cout<<"stack  is empty"<<endl;
    }
    else {
        cout<<"  stack is not empty"<<endl;
    }
}

void print()  {
    for(int i=0;i<=top;i++)  {

        cout<<st[i]<<" ";
    }
    cout<<endl;
}
int main()  {
    push(1);
    push(2);
    push(10);
    pop();
    push(5);
    topElement();
    pop();
    checkEmpty();
    print();
    //out<<topELement()<<endl;
    return 0;
}
