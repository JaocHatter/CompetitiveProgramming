#include <bits/stdc++.h>
//It is worth mentioning that there is already a library for this task
#include <stack>
#define forn(i,n) for(int i=0;i<n;i++)
using namespace std;
struct Node{
    int data;
    Node *next;
};
struct Node* Stack;
void push(int num){
    Node* node=new Node();
    node->data=num;
    node->next=NULL;
    if(Stack==NULL){
        node->next=Stack;
        Stack=node;
        return;
    }
    node->next=Stack; 
    Stack=node;
    return;
}
void pop(){
    if(Stack==NULL){
        cout<<"\nYou cannot execute this action"<<endl;
        return;
    }
    Node* aux=new Node();
    aux=Stack->next;
    Stack=aux;
    /*delete aux;*/
    return;
}
void Print(){
    Node* ptr;
    ptr=Stack;
    while(ptr!=nullptr){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    delete ptr;
    cout<<"\n";
    return;
}
void ReversePrint(){
    struct Node *prev,*next,*current;
    current=Stack;
    prev=NULL;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    while(prev!=NULL){
        cout<<prev->data<<" ";
        prev=prev->next;
    }
    return;
}
int main(){
    int l,test; 
    cout<<"How many nodes do you wanna create?"<<endl;
    cin>>l;
    while(l--){
        cin>>test;
        push(test);
    }
    cout<<"Stack review 1:"<<endl;
    Print();
    pop();
    pop();
    cout<<"\nStack review 2:"<<endl; 
    Print();
    cout<<"\nDe reversa..."<<endl;
    ReversePrint();
    return 0;
}