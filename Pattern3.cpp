// Pattern – 3: Right-Angled Number Pyramid
// Problem Statement: Given an integer N, print the following pattern : 

// Input Format: N = 3
// Result: 
// 1
// 1 2 
// 1 2 3

// Input Format: N = 6
// Result:
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4 5 6

class Solution {
  public:
    void printTriangle(int n) {
        // code here
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};