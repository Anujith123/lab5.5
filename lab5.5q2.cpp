// including library
#include<iostream>
using namespace std;
int main()
          {
           //defining variables
           int i,j;
           //aplaying conditions
           for(i=1;i<6;++i){
                            for(j=1;j<6;j++)
                            {
                            //displaying programmes
                            if(i==1 || i==5|| j==1 ||j==5)
                            cout<<"*";
                            else
                            cout<<" ";
                            }
                            cout<<endl;
                            }
return 0;
}

