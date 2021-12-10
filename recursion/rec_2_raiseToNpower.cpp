#include<iostream>
using namespace std; 
int PowerOfN(int n , int p){
    if (p==0){
        return 1;
    }
    return n * PowerOfN(n,p-1);
}
int main() {
    int n,p;
    cin>>n>>p;
     cout<< PowerOfN(n,p);
}