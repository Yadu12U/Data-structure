#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
void fact(int);
   fact(n);
}
int fact(int N){
  int fac=1;
  for(int i=N; i>0; i--){
    fac*=i;
  }
return fac
}
