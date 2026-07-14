// Prints a number spiral
// Spiral printed is in ascending order i.e. 1 on outside and 'n' in in center.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size: ";
    cin>>n;
    for(int i=1; i<=2*n-1; i++){
        for (int j=1; j<=2*n-1; j++){
            int a=i , b=j;
            if (i>n) a= 2*n-i;
            if (j>n) b = 2*n-j;
            cout<<min(a,b)<<" ";
        }
        cout<<endl;
    }
    return 0;
}