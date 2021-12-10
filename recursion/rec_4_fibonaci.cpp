#include<iostream>
using namespace std;
 
//    0 , 1 , 1 , 2 , 3 , 5 , 8 , 13 ... 

  int Fib(int n){
      if(n==0 || n==1){
          return n;
      }
       return Fib(n-1) + Fib(n-2);
    //  F(n) = F(n-1) + f(n-2);
  }


 int main(){
     int n;
     cin >> n;
     cout << Fib(n) << endl;

     int x =0 ;

    while (x<n)
    {
        cout<<Fib(x)<<" ";
        x++;
    }
    

 }