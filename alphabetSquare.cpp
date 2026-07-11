// Prints a square of capital letters
// 65 is the ASCII value of 'A' and it continues till 90 for 'Z'
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number between 1 and 26 (inclusive): ";
    cin>>n;
    for (int i =1; i<=n; i++){       // Prints rows
        for (int j =1; j<=n; j++){    // Prints columns
            cout<<(char)(j+64)<<" ";  // Replace 64 with 96 for small letters 
        }
        cout<<endl;   // Changes line after completing each row
    }
    return 0;
}