#include<iostream>
using namespace std;  // for the stdin stdout function use

int getBIT(int n, int pos){
     // getBIT function 

    // Here I have to tell the bit at a particular postion it is 0/1?
     // for eg n=5 i.e. 0101  .................1

    // We make a new no. such as we want to know what bit is +nt at the given positon
    // So by using the left shift operator to 1 for that postion 
    //  1<<i = 0100 if i=2     .................2
    // Now we have to use and(&) operator b/w  1 and 2
    // by this we get the bit at particular postion 
    // if 1 is +nt in ans then 1 bit +nt at that postion 
    // if 0 is  the ans than 0 is +nt at that postion.

    // so at last conclusion is we have to return  ( (n & (1<<pos)) ! = 0)

    return((n & (1<<pos))!=0);
}
 int setBIT(int n , int pos){
     // clearBIT function 

     // here we known the position and '1' bit has to be set at that particular pos.
    // for eg n = 0101 (5) ..............1
        // suposed we need to set bit at postion , 1=1 
        // then using left shift operator 1<<i =0010  ...............2              (i= 1) {i -> basicaly tell the index }
        // now we have to take the OR (|) operation b/w 1 and 2 
         
         // so at last conclusion is we have to return ((n | (1<<pos)) ! =0)


         return ((n|(1<<pos))!=0);
 }

 int clearBIT( int n , int pos){
      // clearBIT function 

      // here we have to clear or unset (means put 0) at that particular position.
        // for eg n=0101 ........1st
        // at pos = 2 so 1<<pos .........2nd  (0100)
        // so now take the complement of 2nd  and mark it.
        //  ~(2nd) = ~(0100) = 1011 ..........3rd 
        //  then at last take the AND operation b/w 1st and 3rd

        // at last conclusion is we have to return ( ( n & (~(1<<pos)) ) )

        int mask = ~(1<<pos);
        return (n & mask);


 }
 int updateBIT(int n , int pos , int val){
     // updateBIT function

     // Given here know the pos and bit (0/1) 
     // eg n=0101
         //    ^
     // suposed we need to update bit at position i=1 to bit 1

    // step :-1 We have clear the bit at that postion or we say that uset the bit
    // step :-2 We have set bit process at that postion (1 or 0) << pos and take or 
        //       with previous step.

        int mask = ~(1<<pos);
         n = n & mask ; 

         return (  n | (val<<pos));  // val -> 0 or 1

 }
int main (){
  
  cout<< setBIT(5,2)<<endl;
  cout<< getBIT(5,3)<<endl;
  cout<< clearBIT(5,2)<<endl;
  cout<< updateBIT(5,1,1)<<endl;
  
      
      return 0; 
}