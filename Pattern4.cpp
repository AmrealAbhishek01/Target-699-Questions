// Pattern – 4: Right-Angled Number Pyramid – II
// Problem Statement: Given an integer N, print the following pattern : 

// Input Format: N = 3
// Result: 
// 1
// 2 2 
// 3 3 3

// Input Format: N = 6
// Result:
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
// 6 6 6 6 6 6

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<i<<" ";
            }cout<<endl;
        }
    }
};