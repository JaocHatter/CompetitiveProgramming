#include <bits/stdc++.h>
#define forn(i,n) for(int i=0;i<n;i++)
using namespace std;
struct Node{
    int data;
    Node* next;
};
struct Node* Reverse(struct Node* head){
    struct Node *prev,*next,*current;
    current=head; //current
    prev=NULL;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current; 
        current=next;
    }
    return prev;
}
struct Node* rll;
void insert(int num){
    Node* temp=new Node();
    temp->data=num;
    temp->next=rll;
    rll=temp;
    return;
}
int main(){
    rll=NULL;
    forn(i,6) insert(i+1);
    Node* ptr;
    ptr=rll;
    while(ptr!=nullptr){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<"\nREVERSED"<<endl;
    rll=Reverse(rll);
    ptr=rll;
    while(ptr!=nullptr){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    return 0;
}