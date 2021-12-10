#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  bool Prime(int);
  for(int i=a; i<=b; i++){
    if(Prime(i))
    cout<<i<<endl;
  }
}
  bool Prime(int N){
      for(int i=2; i<N; i++){
        if(N%i==0)
        return false;
      }
      return true;
  }
