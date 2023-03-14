#include<iostream>
using namespace std;

int decimal(int n){
    int ans=0;
    int i=1;
    while(n!=0){
        int last_digit=n&1;
        ans=ans+last_digit*i;
        i=i*2;
        n>>1;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int ans=decimal(n);
    cout<<ans;
}

