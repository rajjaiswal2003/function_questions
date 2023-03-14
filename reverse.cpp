#include<iostream>
using namespace std;

int reverse(int n){
    int reverse_no=0;
    while(n!=0){
    int last_digit=n%10;
    reverse_no=reverse_no*10+last_digit;
    n=n/10;
    }
    return reverse_no;
}

int main(){
    int n;
    cin>>n;
    int ans=reverse(n);
    cout<<ans;
    return 0;
}