#include <iostream>
#include <vector>
#include queue.h
using namespace std;
template<typename T>
class TreeNode{
public:
    T data;
    vector<TreeNode<T>*> children;
    TreeNode(T data){
    this->data = data;
    }

};
TreeNode<int>* takeinputlevelwise(){
int rootdata;
cout<<"enter data";
cin>>rootdata;
TreeNode<int>* root = new TreeNode<int>(rootdata);
queue<TreeNode<int>*> q;
q.push(root);
while(!q.isempty()){
    TreeNode<int>* f = q.front();
    q.pop();
    cout<<"enter no of children of"<<f->data<<endl;
    int n ;
    cin>>n;
    for(int i =1;i<=n;i++){
        int childdata;
        cout<<"enter"<<i<<"th child of"<<f->data<<endl;
        cin>>childdata;
        TreeNode<int>* child = new TreeNode<int>(childdata);
        q.push(child);
        f->children.push_back(child);
    }


    }
return root;
}

void printree(TreeNode<int>* root){
cout<<root->data<<" ";
for(int i=0;i<root->children.size();i++){
cout<<root->children[i]->data<<",";}
cout<<endl;
for (int i = 0;i<root->children.size();i++){
    printree(root->children[i]);
}
TreeNode<int>* takeinput(){
    int rootdata;
    cout<<"enter data";
    cin>>rootdata;
    TreeNode<int>* root = new TreeNode<int>(rootdata);
    int n;
    cout<<"enter the number of children";
    cin>>n;
    for(int i=1;i<=n;i++){
       TreeNode<int>* child = takeinput;
       root->children.push_back(child);
    }
    return root;
}

}
int main()
{
    TreeNode<int>* root = new TreeNode<int>(1);
    TreeNode<int>* n1  = new TreeNode<int>(2);
    TreeNode<int>* n2 = new TreeNode<int>(3);

    root->children.push_back(n1);
    root->children.push_back(n2);
    printree(root);
    return 0;
}
