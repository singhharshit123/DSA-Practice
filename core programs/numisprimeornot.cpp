#include<iostream>
#include <cmath>
using namespace std;


bool checkPrime(int n) {
       int i=2;
    for (i=2;i<=sqrt(n);i++) {
        if (n%i==0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout<<"enter the number";
    cin>>n;

    bool isPrime = checkPrime(n);
    if (isPrime) {
        cout<<"Prime number"<<endl;
    }
    else {
        cout<<"Not Prime number"<<endl;
    }
}