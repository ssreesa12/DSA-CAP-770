#include<iostream>
#define n 100
using namespace std;
int arr[n];
int top=-1;
void push(){
    int x;
    // cout<<"enter the number to pop"<<endl;
    // cin>>x;
    if(top==n-1){
        cout<<"overflow";
    }else{
        // top++;
        // arr[top]=x;
        // cout<<"your number is pushed that is:"<<arr[top]<<endl;
        int count;
        cout<<"enter how many number you want to enter"<<endl;
        cin>>count;
        for(int i=0;i<=count;i++){
            top++;
            cout<<"enter the number"<<" "<<i;
            cin>>x;
            arr[top]=x;
        }
        

    }
}
void pop(){
    int item;
    if(top==-1){
         cout<<"underflow"<<endl;
    }else{
       item = arr[top];
       top--;
       cout<<"your item has poped"<<item<<endl;
    }
}
void isempty(){
    if(top==-1){
        cout<<" stack is empty"<<endl;
    }else{
        cout<<"stack is not empty"<<endl;
    }
}
void display(){
     for(int i=top;i>=0;i--){
        cout<<arr[i]<<endl;}
}
void peek(){
    if(top>-1){
        cout<<arr[top]<<endl;
    }
}
int main(){
    int choice;
      while(choice != 0){
    cout<<"enter your choice 1: push 2:pop 3:isempty 4:display 5:peek"<<endl;
    cin>>choice;
  
    switch(choice){
        case 1:push();
        break;
        case 2: pop();
        break;
        case 3:isempty();
        break;
         case 4:display();
        break;
         case 5:peek();
        break;
        default:cout<<"invalid choice";
        }
     
}
}