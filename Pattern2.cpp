// Pattern-2: Right-Angled Triangle Pattern
// Problem Statement: Given an integer N, print the following pattern : 
// Input Format: N = 3
// Result: 
// * 
// * * 
// * * *

// Input Format: N = 6
// Result:
// * 
// * * 
// * * *
// * * * *
// * * * * *
// * * * * * *

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
};