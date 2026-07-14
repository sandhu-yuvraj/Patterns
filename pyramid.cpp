// Prints centrally aligned pyramid of '*'.
// Combination of two patterns.
#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter Size: ";
    cin>>n;
    for (int i =1; i<=n; i++){
        for (int j =1; j<=n-i; j++){                     // Printing Inverted Triangle of blank spaces
            cout<<"  ";
        }
        for (int j=1; j<=2*i-1; j++){                   // Printing Odd Stars Pyramid
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}