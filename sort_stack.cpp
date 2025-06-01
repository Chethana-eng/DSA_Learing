#include <iostream>
using namespace std;
class stackS1{
    static const int s = 100;
    int arr[s];
    int top;
public:
    stackS1(){
        top = -1;
    }
    void push(int value){
        if ( top == s-1){
            cout<<"Stack if full."<< endl;
        }
        arr[++top] = value;
        cout<<"pushed "<<value<<"into the stack."<< endl;
    }
    int pop(){
        if(top == -1){
            cout<<"Stack underflow"<<endl;
            return -1;
        }
        return arr[top--];
    }
    int peek(){
        if (isEmpty()){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty(){
        return top == -1;
    }
    int Getsize(){
        return top+1;
    }
}
class stackminStack{
    static const int s = 100;
    int arr[s];
    int top;
public:
    stackminStack(){
        top = -1;
    }
    void push(int value){
        if ( top == s-1){
            cout<<"Stack if full."<< endl;
        }
        arr[++top] = value;
        cout<<"pushed "<<value<<"into the stack."<< endl;
    }
    int pop(){
        if(top == -1){
            cout<<"Stack underflow"<<endl;
            return -1;
        }
        return arr[top--];
    }
    int peek(){
        if (isEmpty()){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool isEmpty(){
        return top == -1;
    }
    int Getsize(){
        return top+1;
    }
}
int main(){

} 