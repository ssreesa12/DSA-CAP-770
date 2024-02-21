#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};
void print(node *n){
    while(n!=NULL){
        cout<<n->data<<endl;
        n=n->next;
    }
 
}

int main(){
    node *head=new node();
    node *second=new node();
    node *third=new node();
    
    head->data=5;
    head->next=second;

    second->data=6;
    second->next=third;

    third->data=8;
    third->next=NULL;

    print(head);
}

