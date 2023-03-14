#include<iostream>
using namespace std;

void print_all_prime_no(int n){
    
    for(int i=2;i<=n;i++){
        int ans=0;
        for(int d=2;d<i;d++){
            if(i%d==0){
                ans=1;
                break;
            }
        }
        if(ans!=1){
            cout<<i<<endl;
        }
    }
}

int main(){
    int n;
    cin>>n;
    print_all_prime_no(n);
    return 0;
}
