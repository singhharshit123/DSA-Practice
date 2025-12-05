#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of rows: ";
    cin>>n;
    for (int row=0 ; row<n; row=row+1) {//outer loop
        for (int col=1;col<n-row-1;col=col+1) {//for space
           cout<<" ";
        }
            for (int col=0;col<2*row+1;col=col+1) {//for star
               cout<<"*";
            }
            cout<<endl;


    }

}