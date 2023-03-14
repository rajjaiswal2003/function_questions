#include<iostream>
using namespace std;

int max_no(int a,int b,int c){
    if(a>=b&&a>=c){
        return a;
    }
    else if(b>=a && b>=c){
        return b;
    }
    else{
        return c;
    }
}

int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int c;
    cin>>c;
    int max=max_no(a,b,c);
    cout<<max;
    return 0;
}