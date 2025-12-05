#include <iostream>
using namespace std;



int add(int a, int b) {       //dusara kaam value pass karna
    int result=a+b;
    return result;
}
int main() {
    //last kaaam
    int a;
    cout<<"enter value of a :"<<endl;
    cin>>a;

    int b;
    cout<<"enter value of b:"<<endl;
    cin>>b;


    int sum=add(a,b);              //pahla kaaam
        cout<<"addition of a and b is :"<<sum<<endl;
}
