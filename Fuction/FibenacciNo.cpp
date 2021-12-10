#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  void fib(int);
   fib(n);
}
void fib(int N){
  int f1=0,f2=1,f3; // f3 refers to the next term of the sequence.
  for(int i=1; i<=N; i++){
    cout<<f1<<" ";
    f3=f1+f2;
    f1=f2;
    f2=f3;
  }
return;
}
