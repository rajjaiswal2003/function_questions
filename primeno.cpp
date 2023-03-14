#include<iostream>
using namespace std;

void check_prime(int n){
    int ans=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"no is not prime";
            ans=1;
            break;
        }
    }
    if(ans!=1){
        cout<<"no is prime";
    }
    }


int main(){

        int n;
        cin>>n;
        check_prime(n);
}