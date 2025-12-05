#include <iostream>
using namespace std;

int fact(long long n) {          //we also write long long in place of int in the whole program--->
    int fact = 1;
    for (int i=1;i<=n;i++) {
        fact=fact*i;
    }
    return fact;
}




int main() {
  int  n;
    cout<<"Enter a number: ";
    cin>>n;
  int ans=fact(n);
    cout<<"factorial of "<<ans<<endl;

}