#include<iostream>
using namespace std;

int find_number_of_set_bit(int n){
    int ans=0;
    while(n!=0){
        if(n&1){
            ans++;
        }
       n=n>>1;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int ans=find_number_of_set_bit(n);
    cout<<ans;
    return 0;
}