#include<iostream>
using namespace std;

int set_the_ith_bit(int n,int i){
    int mask=1<<i;
    int ans=n|mask;
    return ans;
}

int main(){
    int n;
    cin>>n;
    int i;
    cin>>i;
    int final=set_the_ith_bit(n,i);
    cout<<final;

}