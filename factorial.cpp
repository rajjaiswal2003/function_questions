#include<iostream>
using namespace std;

int factorial(int n){
    int mul=1;
    for(int i=n;i>=1;i--){
        mul=mul*i;
    }
    return mul;
}

int main(){

    int n;
    cin>>n;
    int ans=factorial(n);
    cout<<"the factorial of the given no is :"<<ans<<endl;
    return 0;
}