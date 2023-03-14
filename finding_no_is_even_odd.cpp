#include<iostream>
using namespace std;

void find(int n){
    if(n%2==0){
        cout<<"the given no is even ";
    }
    else{
        cout<<"the given no is odd";
    }
}

int main(){
    int n;
    cin>>n;
    find(n);
}