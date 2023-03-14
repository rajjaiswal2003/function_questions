#include<iostream>
using namespace std;

char grade(int n){
     switch(n/10){
        case 10:
        return 'A';
        break;
        case 9:
        return 'A';
        break;
        case 8:
        return 'B';
        break;
        case 7:
        return 'C';
        break;
        case 6:
        return 'D';
        break;
        case 5:
        return 'E';
        default:
        return 'F';
     }               // if(n>=90){
                    //     return 'A';
                    // }
                    // else if(n>=80){
                    //     return 'B';
                    // }
                    // else if(n>=70){
                    //     return 'C';
                    // }
                    // else if(n>=60){
                    //     return 'D';
                    // }
                    // else if(n>=50){
                    //     return 'E';
                    // }
                    // else{
                    //     return 'F';
                    // }
}

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
    char ans=grade(i);
    cout<<i<<" ";
    cout<<"grade is:"<<ans<<endl;
    }
    return 0;
}