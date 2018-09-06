// including library
#include<iostream>
using namespace std;
int main()
          {

           //defining class
           int n=5;

           //loop
           for(int i=0;i<5;i++)
           {

            // condition
            if(i==0||i==1||i==4)
            {
             //loop within a loop
             for (int j=0;j<(i+1);j++){
             //print
             cout<<"*";
             }
             cout<<endl;
             }             
             // condition
            else
            {
             //print
             cout<<"*";
             //print space
             for(int j=0;j<(i-1);j++){
             cout<<" ";
                                 }
             //print star
             cout<<"*" ;       
             cout<<endl; }
//end
}
return 0;
//stop
}
