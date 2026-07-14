// Prints rhombus of '*'.
#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter Size: ";
    cin>>n;
    for (int i=n; i>=1; i--){                 // Print flipped triangle of spaces
        for (int j=1; j<=i; j++){
            cout<<"  ";
        }
                                             // Prints square of '*'
         for (int j =1; j<=n; j++){
            cout<<"* ";
         }
         cout<<endl;
    }     
    }              