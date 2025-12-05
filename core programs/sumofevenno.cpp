#include<iostream>
using namespace std;

int getSum(int n) {
    int sum=0;
    for (int i=2;i<=n;i=i+2) {
        sum=sum+i;
    }
    return sum;
}



int main() {
    int n;
    cout<<"enter value of n:"<<endl;
    cin>>n;
    int ans =getSum(n);
    cout<<"Sum is"<<ans<<endl;
    return 0;
}