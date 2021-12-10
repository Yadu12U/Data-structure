#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
  int s=0, e=n;
  while(s<=e){
    int mid=(s+e)/2;
    if(arr[mid]==key){
      return mid;
    }
    else if(arr[mid]>key){
      e=mid-1;
    }
    else{
      s=mid+1;
    }
  }
  return -1;
}

 int main(){
     int n;
     cin>>n;

     int arr[n];
     for(int i=0; i<n; i++){
         cin>>arr[i];
     }
     int key;
     cin>>key;

     // int binarySearch(int[],int,int);
     cout<< binarySearch(arr,n,key)<<endl;
 }


/*
        Time Complexity of Binary Search

    After first iteration, length of array  -> n
    After secondd iteration, length of array  ->n/2
    After third iteration, lenth of array -> n/2^2
    After k iterationn, length of array  -> n/2^2

       Let gthe length of array become 1 after k iterations

       k=logn having the base 2

       TC = O(logn)

*/
