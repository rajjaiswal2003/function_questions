#include <iostream>
using namespace std;

int add(int first_no,int second_no){
    int sum=first_no+second_no;
}

int main(){
    int first_no;
    cin>>first_no;
    int second_no;
    cin>>second_no;
    int sum=add(first_no,second_no);
    cout<<sum;
    return 0;
}
