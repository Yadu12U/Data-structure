#include<iostream>
using namespace std;
int main(){
  // 1
  // 1 1
  // 1 2 1
  // 1 3 3 1
  // 1 4 6 4 1

  int n;
  cin>>n;
  int fact(int);
  for(int i=0; i<n; i++){
    for(int j=0 ; j<=i; j++){
      cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
    }
    cout<<endl;
  }
}
int fact(int N){
  int fac=1;
  for(int i=N; i>0; i--){
    fac*=i;
  }
return fac;
}
