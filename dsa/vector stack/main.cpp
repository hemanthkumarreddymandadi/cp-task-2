#include <iostream>
#include <vector>
using namespace std;
class stack{
vector<int> arr;
int nextindex;
int capacity;
public:
    stack(){
    nextindex=0;

    }


    int size(){
    return nextindex;
    }
    bool isempty(){
    return nextindex!=0;
    }
    void push(int ele){

    arr[nextindex] = ele;
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


/*stack s2(10);
for(int i=1;i<=10;i++){
    s2.push(i);
}
while(s2.isempty()){
    cout<<s2.top()<<endl;
    s2.pop();
}*/
    return 0;
}
