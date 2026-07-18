/* Pascal's Triangle
   Pascal's Triangle is a triangular array of the binomial coefficients. 
   Its entries are the numbers in the sequence 1, 1, 1, 2, 1, 3, 3, 1, 4, 6, 4, 1, ... 
   Used to visualize and calculate binomial coefficients.
   Has use in probability, combinatorics, and algebra   
   It was discovered by Blaise Pascal. */

#include <bits/stdc++.h>
using namespace std;
int fact(int x){
    int fact = 1;
    for (int i = 1; i <= x; i++){
        fact *= i;
    }
    return fact;
}
int binomialCoeff(int n, int r){                          // Calculating nCr or Binomial Coefficient
    return fact(n) / (fact(r) * fact(n - r));
}
int main(){
    int n;
    cout<<"Enter the number of rows for Pascal's Triangle: ";
    cin>>n;
    for (int i =0; i<=n; i++){
        for (int j =0; j<=n-i; j++){
            cout<<" ";
        }
        for (int r =0; r<=i; r++){
            cout<<binomialCoeff(i, r)<<" ";
        }
        cout<<endl;
    }
    return 0;
}