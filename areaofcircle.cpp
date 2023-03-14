#include<iostream>
using namespace std;

float area_of_square(int r){
   float area = 3.14*r*r;
   return area;
}

int main(){
   int r;
   cin>>r;
   float ans= area_of_square(r);
   cout<<"the area of square is: "<<ans;
   return 0;
}