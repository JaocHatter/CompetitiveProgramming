#include <bits/stdc++.h>
#define forn(i,n) for(int i=0;i<n;i++)
using namespace std;
struct Node{
    int data;
    Node *next,*prev;
};
struct Node *head;
struct Node* CreateNewNode(int n){
    Node* node=new Node();
    node->data=n;
    node->next=NULL;
    node->prev=NULL;
    return node;  
}
void push(int n){
    Node* node=CreateNewNode(n);
    if(head==NULL){
        head=node;
        return;
    }
    // if head isnt empty
    head->prev=node;
    node->next=head;
    head=node;
}
int main(){
    head=NULL;
    Node* ptr;
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    ptr=head;
    cout<<"Normal iteration"<<endl;
    while(1){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
        if(ptr->next==NULL){
            cout<<ptr->data<<" ";
            break;
        }
    }
    cout<<endl;
    cout<<"Reverse iteration"<<endl;
    while(1){
        cout<<ptr->data<<" ";
        ptr=ptr->prev;
        if(ptr->prev==NULL){
            cout<<ptr->data<<" ";
            break;
        }
    }
    return 0;
} 
