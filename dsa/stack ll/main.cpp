

#include <iostream>
using namespace std;
class Node{
    public:
 int data;
 Node *next;

 Node (int data){
 this->data = data;
 next = NULL;}

};

class stack{
Node *head;
int size;
public:
    stack(){
        head = NULL;
        size = 0;

    }
    int getsize(){
    return size;
    }
    bool isempty(){
    return size==0;
    }
    void push(int ele){
    Node *n = new Node(ele);
    n->next = head;
    head = n;
    size++;
    }
    void pop(){
        if(isempty()){
            cout<<"stack empty"<<endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        size--;
        }
        int top(){
            if(isempty()){
                cout<<"stack empty"<<endl;
                return 0;
            }

        return head->data;}

};
int main()
{
    stack s;
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
cout <<s.getsize()<<endl;
cout <<s.isempty()<<endl;
return 0;
}
