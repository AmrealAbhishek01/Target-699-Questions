// Pattern-1: Rectangular Star Pattern
// Problem Statement: Given an integer N, print the following pattern.

// Example 1:
// Input: N = 3
// Output: 
// * * *
// * * *
// * * *

// Example 2:
// Input: N = 6
// Output:
// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *


class Solution {
  public:
    void printSquare(int n) {
        // code here
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
};