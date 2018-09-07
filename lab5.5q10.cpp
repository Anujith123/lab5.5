// include library
#include<iostream>
using namespace std;
//declaring the main function
int main(){
// declare variables
int a,b;
// apply condition  and displaying pattern
for(a=1;a<6;a++){
for(b=1;b<6;b++){
if(a+b>5)
cout<<"*";
else
cout<<" ";}
cout<<endl;}
//closing program
return 0;
}
