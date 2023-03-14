#include<iostream>
using namespace std;

int number(int digit[]){
    int ans=0;
    for(int i=0;i<4;i++){
        ans=ans*10+digit[i];
    }
    return ans;
}

int main(){
    int digit[]={8,3,5,4};
   int ans=number(digit);
   cout<<ans;

}