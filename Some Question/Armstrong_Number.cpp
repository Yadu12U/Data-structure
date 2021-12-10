#include<iostream>
using namespace std;
int main(){
  int n,ld=0,sum=0;
  cin>>n;

  // To check the given no. is armstrong or not.
int N=n;
  while(N>0){

    ld= ld*10 + N%10;
    sum+=ld*ld*ld;
    ld=0;
    N/=10;
  }
  if(sum==n)
  cout<<"The given no. is palindrome.";
  else
  cout<<"The given no. is NOT a Palindrome";
}
