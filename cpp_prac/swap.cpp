#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a,b;
    cout <<"enter 2 number to swap"<< endl;
    cin >> a >> b;
    cout << "a ="<< a <<" b="<< b << endl;
    // a=a+b;
    // b=a-b;
    // a=a-b;
    swap(a,b);
    cout << "a ="<< a <<" b="<< b << endl;
}