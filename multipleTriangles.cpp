// Using functions, it prints multiple triangles.
#include <iostream>
using namespace std;
void printTriangle(int n) {
    for (int i=1; i<=n; i++) {
        int a;
        cout<<"Enter the size of triangle: ";
        cin>>a;
        for (int j=1; j<=a; j++){
            for (int k =1; k<=j; k++){
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
    }
}
int main (){
    int n;
    cout<<"Enter the number of triangles: ";
    cin>>n;
    printTriangle(n);
    return 0;
}