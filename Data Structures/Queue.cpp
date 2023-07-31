#include <bits/stdc++.h>
#include <queue>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node *front,*rear; //Pointers pointing to the start and final of the Queue
void Enqueue(int n){
    Node* temp=new Node();
    temp->data=n;
    temp->next=NULL;
    if(front==NULL && rear==NULL){
        front=rear=temp;
        return;
    }
    rear->next=temp;
    rear=temp;
}
void Dequeue(){
    Node *temp=front; //useful to clear memory
    if(front==NULL) return; //theres nothing
    if(front==rear){
        front=rear=NULL;
    }else{
        front=front->next;
    }
    delete temp;
}
void Print(){
    Node* ptr;
    ptr=front;
    while(ptr!=nullptr){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl;
}
int main(){
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Enqueue(4);
    Enqueue(5);
    Print();
    Dequeue();
    Dequeue();
    Print();
    //FIFO Confirmed    
    return 0;
}