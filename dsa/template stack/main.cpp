
#include <iostream>
using namespace std;
template<class T>
class stack{
T *arr;
int nextindex;
int capacity;
public:
    stack(){
        capacity = 4;
    arr = new T[4];
    nextindex=0;

    }
    stack(int cap){
        capacity = cap;
    arr = new int[capacity];
    nextindex=0;
    }
    int size(){
    return nextindex;
    }
    bool isempty(){
    return nextindex==0;
    }
    void push(T ele){
    if(capacity==nextindex){
        cout<<"stack full";
        return;

    }arr[nextindex] = ele;
    nextindex++;
    }
    void pop(){
        if(nextindex==0){
            cout<<"stack empty";

        }
    nextindex--;}
    T top(){
    if(nextindex==0){
        cout<<"stack empty";
        return 0;

    }
    return arr[nextindex-1];
    }

};
int main()
{stack <int> s;
s.push(10);
s.push(20);

s.push(30);
s.push(40);
s.push(50);
cout <<s.top()<<endl;
s.pop();
cout <<s.top()<<endl;
s.pop();
cout <<s.top()<<endl;
s.pop();
cout <<s.size()<<endl;
cout <<s.isempty()<<endl;



    return 0;
}
