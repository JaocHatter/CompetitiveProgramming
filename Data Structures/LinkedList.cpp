#include <bits/stdc++.h>
#define forn(i,n) for(int i=0;i<n;i++)
using namespace std;
struct Node{
    int data; //datatype that you wanna storage 
    struct Node* next;
};
struct Node* head; //global variable, our LinkedList
void insertNode(int NewData,int pos){
    Node* aux1=new Node();
    aux1->data=NewData;
    aux1->next=NULL;
    if(pos==0){
        aux1->next=head;
        head=aux1;
        return;
    }
    // if i want insert in another position 
    Node* aux2=head;
    forn(i,pos-1){
        aux2=aux2->next;
    }
    aux1->next=aux2->next;
    aux2->next=aux1;
}
void deleteNode(int pos){
    Node* aux1=head; //imagine that pos=1
    if(pos==0){
        //here comes any sh1t about dinamic memory!
                //          ...
        head=aux1->next;
        delete aux1;
        return;
    }
    forn(i,pos-1) aux1=aux1->next; // if pos==1, this loop doesnt work
    if(aux1==nullptr || aux1->next==nullptr) return;
    Node* aux2=aux1->next; // so i selected next node to first node
    aux1->next=aux2->next; //next node of second node is the third node :0... and that will be the next node of first node!
    //This is my intuitive explanation ;)
    delete aux2;
}   
int main(){
    Node* ptr;
    insertNode(1,0);
    insertNode(2,1);
    insertNode(3,2);
    insertNode(4,3);
    insertNode(5,4);
    cout<<"insert node result:"<<endl;
    ptr=head;
    while(ptr!=nullptr){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<"\ndelete node result:"<<endl;
    deleteNode(1);
    deleteNode(2);
    ptr=head;
    while(ptr!=nullptr){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    return 0;
}