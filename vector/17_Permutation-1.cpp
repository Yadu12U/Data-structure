#include<iostream>
#include<vector>
using namespace std;
 
 // if given their 3 no. given to us. 
 // for example we take 1,2,3 
 // then its permutation is the 6 as we know. 
 // so how it will come through.


 vector<vector<int> > ans;  // Here we save our permutation in the form of 
                            // vector data type
   void swap( int &a , int &b )   {
       int temp;
       temp=a;
       a=b;
       b=temp;
   }                         
void permute(vector<int> &A, int idx){
    // base case is the when idx reach to the last index of the vector A then
    // than no is to swap for moving toward forward direction.

    if(idx==A.size()){
        ans.push_back(A);
        return;
    }
    for(int i=idx ; i< A.size() ; i++){
        swap(A[i],A[idx]);
        permute(A, idx+1);
        swap(A[i], A[idx]);
    }
}

int main (){
    int n; cin>>n;
    vector<int> A(n);  // vector A whose is n
    // take input 
    for(int i=0; i<A.size() ; i++)
     cin >> A[i];

     permute(A,0); 

     // for(int i=0 ; i< ans. size() ; i++)
     // {
     //     for(int j=0 ; j< A.size(); j++){
     //         cout<< A[i] ;
     //     }
     //     cout<<endl;
     // }

     for( auto v: ans ){
        for ( auto i : v){
            cout<< i<< " ";
        }
        cout<< endl;
     }

}