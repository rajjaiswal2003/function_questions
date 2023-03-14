#include<iostream>
using namespace std;

float farehnite_to_celcius(int n){
    float ans=((n-32)*5)/9.0;
    return ans;
}

int main(){
    int n;
    cin>>n;
    float celcius=farehnite_to_celcius(n);
    cout<<celcius;
}