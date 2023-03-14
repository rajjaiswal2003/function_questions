#include<iostream>
using namespace std;

int binary(int n){
    int ans=0;
    int i=1;
    while(n!=0){
        int remainder=n%2;
        ans=ans+remainder*i;
        i=i*10;
        n=n/2;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int ans= binary(n);
    cout<<ans;
}