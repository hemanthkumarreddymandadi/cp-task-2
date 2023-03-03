

#include <iostream>
using namespace std;
class stack{
int *arr;
int nextindex;
int capacity;
public:
    stack(){
        capacity = 4;
    arr = new int[4];
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
    void push(int ele){
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
    int top(){
    if(nextindex==0){
        cout<<"stack empty";
        return -1;

    }
    return arr[nextindex-1];
    }

};
int main()
{stack s;
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


stack s2(10);
for(int i=1;i<=10;i++){
    s2.push(i);
}
while(s2.isempty()){
    cout<<s2.top()<<endl;
    s2.pop();
}
    return 0;
}
