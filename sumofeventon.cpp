#include<iostream>
using namespace std;

int sumofeven(int n){
    int sum=0;
    for(int i=2;i<=n;i=i+2){
        cout<<i<<endl;
        sum=sum+i;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int ans=sumofeven(n);
    cout<<"sum of even no till n is :"<<ans<<endl;
    return 0;

}