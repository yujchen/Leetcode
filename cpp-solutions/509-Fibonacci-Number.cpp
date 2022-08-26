/*
509. Fibonacci Number
Easy

The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.

Given n, calculate F(n).

 

Example 1:

Input: n = 2
Output: 1
Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.

Example 2:

Input: n = 3
Output: 2
Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.

Example 3:

Input: n = 4
Output: 3
Explanation: F(4) = F(3) + F(2) = 2 + 1 = 3.

 

Constraints:

    0 <= n <= 30


*/
class Solution {
public:
    //unordered_map<int,int> m = {{0,0},{1,1}}; //solution 4

    //Solution 5, matrix exponentiation
    //     void matrixMultiply(int A[][2], int B[][2]){
//         int w = A[0][0]*B[0][0] + A[0][1]*B[1][0];
//         int x = A[0][0]*B[0][1] + A[0][1]*B[1][1];
//         int y = A[1][0]*B[0][0] + A[1][1]*B[1][0];
//         int z = A[1][0]*B[0][1] + A[1][1]*B[1][1];
        
//         A[0][0] = w;
//         A[0][1] = x;
//         A[1][0] = y;
//         A[1][1] = z;
        
//     }
//     int re(int A[2][2], int n){
//         if (n <= 1){
//             return n;
//         }
//         re(A,n/2);
//         matrixMultiply(A,A);
        
//         int B[2][2] = {{1,1},{1,0}};
//         if(n%2 != 0){
//             matrixMultiply(A,B);
//         }
//         return A[0][0];  
//     }
//     int A[2][2] = {{1,1},{1,0}};
    int fib(int n) {
        // //(1)recursive solution
        // if (n == 0){
        //     return 0;
        // }
        // if (n == 1){
        //     return 1;
        // }
        // return fib(n-1)+fib(n-2);
        // //(2)Bottom up with Tabulation
        // vector<int> m;
        // m.push_back(0);
        // m.push_back(1);
        // for (int i = 2; i <= n; i++){
        //     m.push_back(m[i-1] + m[i-2]);            
        // }
        // return m[n];
        // //(3)bottom up/tab with memory optimized
        // if (n == 0){
        //     return 0;
        // }
        // if (n == 1){
        //     return 1;
        // }
        // int prev1 = 1;
        // int prev2 = 0;
        // int cur = 0;
        // for(int i = 2; i <= n; i++){
        //     cur = prev1+prev2;
        //     prev2 = prev1;
        //     prev1 = cur;
        // }
        // return cur;
        //(4)Top down with memoization
        // if (m.count(n)){
        //     return m[n];
        // }
        // m[n] = fib(n-1)+fib(n-2);
        // return m[n];
        // //Sol5 matrix exponentiation
        // if (n <= 1){
        //     return n;
        // }
        // return re(A,n-1);
        // //Sol6 Binet's Formula
        return (1/sqrt(5))*(pow((1+sqrt(5))/2,n)-pow((1-sqrt(5))/2,n));
    }
};
