#include<iostream>
using namespace std;
int main(){
    int n[5]={1,5,7,9,4};
    int k;
    cout<<"enter an number to be searched";
    cin>>k;
    for(int i=0;i<5;i++){
        if(n[i]==k){
            cout<<"the number is present in index "<<i;
        } 
    }
    if(i==n) cout<<"Not found"<< "\n";
    return 0;
}
    

