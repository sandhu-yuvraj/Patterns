// Prints a modified alphabet square
// Prints letters in lower case for odd rows and upper case for even rows
// Prints letters row wise
#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a number between 1 and 26 (inclusive): ";
    cin>>n;
    for (int i =1; i<=n; i++){       // Prints rows
        for (int j =1; j<=n; j++){    // Prints columns
          if (i%2 == 0)  cout<<(char)(i+64)<<" ";  // Prints capital for even rows
          else cout<<(char)(i+96)<<" "; // Prints small for odd rows
        }
        cout<<endl;   // Changes line after completing each row
    }
    return 0;
}