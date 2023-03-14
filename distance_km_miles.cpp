#include<iostream>
using namespace std;

float distance(int n){
    float ans=n*(1/1.60);
    return ans;
}

int main(){
    int n;
    cin>>n;
    float ans=distance(n);
    cout<<ans;

}