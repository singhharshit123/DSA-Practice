//
// Created by Harshit Singh on 25-11-2025.
//
// Created by Harshit Singh on 25-11-2025.
#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the no.of rows:";
    cin>>n;
    cout<<"Enter the no.of columns:";
    cin>>n;
    for (int rows=1;rows<=n; rows++) {
        for (int columns=1;columns<=n;columns++) {
            cout<<"*";
        }
        cout<<endl;
    }
}