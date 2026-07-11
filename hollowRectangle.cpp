// Prints a hollow rectangle like a photoframe
#include <iostream>
using namespace std;
int main (){
             int m;
             int n;
             cout<<"Enter length of rectangle: ";
             cin>>m;
             cout<<"Enter width of rectangle: ";
             cin>>n;
             for (int i=1; i<= m; i++){
                for (int j=1; j<=n; j++){
                    if ( i== 1 || i== m|| j==1 || j==n) cout<<"*"<<" ";
                    else cout<<" "<<" ";
                }
                cout<<endl;
             }
}