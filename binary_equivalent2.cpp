#include<iostream>
using namespace std;

int binary_conversion(int n){
    int ans=0;
    int i=1;
    while(n!=0){
        int remainder=n&1;
        ans=ans+remainder*i;
        i=i*10;
        n=n>>1;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int ans=binary_conversion(n);
    cout<<ans;
}