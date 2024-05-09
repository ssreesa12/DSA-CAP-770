#include<iostream>
#define n 3
using namespace std;
int arr[n];
int front=-1;
int rare =-1;


void eQueue(){
    int x;
    cout<<"enter the number you want to add"<<endl;
    cin>>x;
    if(front == n-1){
        cout<<"Overflow";

    }else if(front == -1 && rare == -1){
front = rare = 0;
arr[rare]=x;
    }else {
        rare++;
          arr[rare]=x;
          cout<<"your number had added in the queue:"<<endl;}
}
void dQueue(){
    if(front == -1 && rare == -1){
        cout<<"queue is empty";
    }else if(front == rare){
            front=rare=-1;
        }else{
            cout<<"the dQueue element in the Queue is : " <<arr[front];
         front++;
    }
}
void disolay(){
    for(int i=front;i<=rare;i++){
        cout<<arr[i]<<endl;
    }
}
void isfull(){
    if(rare==n-1){
        cout<<"Queue is full"<<endl;
    }else {
        cout<<"Queue is not full";
    }
}
void peek(){
    if(front == -1 && rare == -1){
        cout<<"Queue is empty"<<endl;
    }else{
        cout<<"the peek element is :" <<arr[front];
    }
}
int main(){
    
    int choice;
      while(choice != 0){
    cout<<"enter your choice 1: eQueue 2:dQueue 3:isfull 4:disolay 5:peek"<<endl;
    cin>>choice;
  
    switch(choice){
        case 1:eQueue();
        eQueue();
        eQueue();
        break;
        case 2: dQueue();
        break;
        case 3:isfull();
        break;
         case 4:disolay();
        break;
         case 5:peek();
        break;
        default:cout<<"invalid choice";
        }
     
}
}
