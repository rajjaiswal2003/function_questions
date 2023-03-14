#include<iostream>
using namespace std;

void print_digit(int n){
    while(n!=0){
        int last_digit=n%10;
        cout<<last_digit<<endl;
        n=n/10;
    }
}

int main(){
    int n;
    cin>>n;
    print_digit(n);

}