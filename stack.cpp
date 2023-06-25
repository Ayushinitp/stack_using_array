#include <iostream>
#include <stdio.h>
using namespace std;
class stack{
    private: 
    int capacity;
     int top;
     int *ptr;
     public:
     stack(int);
     void push(int);
     void peek();
     void pop_top();
    
     void show();
};

//parameterized constructor
stack::stack(int size){
    capacity=size;
    top=-1;
    if(ptr!=NULL)
    {
        delete []ptr;
    }
    ptr=new int[capacity];
}

//push element into the stack
void stack::push(int data){
    if(top>=capacity)
    cout<<"Stack is overflow!!!!!Insertion not possible";
    else
    {
        top++;
        ptr[top]=data;
    }
}

//peek top element of the stack
void stack::peek(){
    if(top==-1)
    cout<<"Stack is empty";
    else
    cout<<ptr[top];
}

//function to pop the topmost element of stack
void stack::pop_top(){
    if(top==-1)
    cout<<"stack is empty!!!nothing can be popped out!!!";
    else
    {
        int *temp=new int;
        temp=&ptr[top];
        top--;
        delete temp;
    }
}


void stack::show(){
    int i;
    cout<<"data in stack are"<<endl;
    for(i=0;i<=top;i++){
        cout<<ptr[i]<<endl;
    }
}
int main(){
    stack obj(5);
    obj.push(10);
    obj.push(20);
    obj.push(30);
    obj.push(40);
    obj.push(50);
    obj.show();
    obj.pop_top();
    obj.show();
    return 0;

}