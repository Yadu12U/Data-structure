#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    int min=INT_MAX;
    
    for(int j=0; j<n; j++){
        if(arr[j]>max){
            max=arr[j];
        }
        if(arr[j]<min){
            min=arr[j];
        }
    }
    cout<<max<<endl;
    cout<<min<<endl;
    // cout<< " lets beging"<<endl;
}