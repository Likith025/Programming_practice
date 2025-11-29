#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c;
    int largest=0;
    cout<<"enter 3 numbers to compare"<<endl;
    cin>>a>>b>>c;
    //largest=(a>b)?((a>c)?a:c):((b>c)?b:c);
    largest=max({a,b,c});  //using max function in algorithm
    cout<<"largest among 3 is "<<largest<<endl;
    return 0;


}