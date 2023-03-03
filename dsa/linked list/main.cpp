#include <iostream>

using namespace std;
class Node{
    public:
 int data;
 Node *next;

 Node(int data){
 this->data = data;
 next = NULL;
 }

};
void print(Node *head){
while(head!=NULL){
cout<<head->data<<" ";
head = head->next;

 }
}
Node* inserinode(Node *head,int i,int data){
    if(i<0){
        return head;
    }
    if(i==0){
        Node* n = new Node(data);
        n->next = head;
        head = n;

    }
    Node *temp=head;
    int count=1;
    while(count<=i && head!=NULL){
        head = head->next;
        count++;
    }
    if(head){
        Node *n = new Node(data);
        n->next = head->next;
        head->next=n;
        return temp;
    }
    return temp;



 }
int length(Node *n1){
int count = 0;
while(n1){
   n1 = n1->next;
   count++;
}
return count;
}

Node* printinode(Node *head,int i){
    int count=0;
    while(head){
            head=head->next;
            count++;
    if(i==count){
        return head;
    }

    }
}


Node *takeinput(){
int data;
cin>>data;
Node *head = NULL;
Node *tail = NULL;
while(data != -1){
    Node *n = new Node(data);
    if(head == NULL){
        head = n;
        tail = n;

    }else{
    tail->next = n;
    tail = n;
    }
    cin>>data;
}

return head;

}

int main()
{ Node *n1=takeinput();
print(n1);
int a;
a=length(n1);
cout<<a;
Node* x=printinode(n1,2);
cout<<x->data;
n1 = inserinode(n1,2,100);
print(n1);
    /*Node n1(1);
Node *head = &n1;
  Node n2(2);
  Node n3(3);
  Node n4(4);
  Node n5(5);
  n1.next = &n2;
  n2.next = &n3;
  n3.next = &n4;
  n4.next = &n5;
  print(head);


 /* n1.next = &n2;
  cout<<n1.data<<" "<<n2.data<<endl;
  Node *head = &n1;
  cout<<head->data<<endl;*/

    return 0;
}
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
cout <<s.size()<<endl;
cout <<s.isempty()<<endl;

