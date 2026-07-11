// Prints number on odd rows, upper case alphabet on even rows and lower case alphabet on rows divisble by 6
// Prints a triangular pattern
#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a number between 1 and 26 (inclusive): ";
    cin>>n;
    for (int i = 1; i<=n; i++){
        for (int j =1; j<=i; j++){
            if (i%6 == 0) cout<<(char)(j+96)<<" ";
            else if (i%2 ==0) cout<<(char)(j+64)<<" ";
            else cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}