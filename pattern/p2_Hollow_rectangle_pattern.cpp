#include<iostream>
using namespace std;
int main ()
{
  int row, col;
   cin>>row >>col;

   //   Row -->>         1  2  3  4  5
   //         C       1  *  *  *  *  *
   //         o       2  *           *
   //         l       3  *           *
   //         M       4  *  *  *  *  *
   for ( int i=1 ; i<=row ; i++)
   {
     for ( int j=1 ; j<=col ; j++)
     {
        if(i==1 || i==row || j==col ||j==1){
          cout<<"*";
        }
        else{
          cout<<" ";
        }
     }
     cout<<endl;
   }
return 0;
}
