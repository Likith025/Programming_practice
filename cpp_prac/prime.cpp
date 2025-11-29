#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num;
    int isprime=0;
    cout<<"enter the number"<<endl;
    cin>> num;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i){
            isprime=1;
            break;
        }

    }
    if(isprime){
        cout<<num<<" is prime"<<endl;
    }
    else
        cout<<num<<" is not prime"<<endl;
    

    return 0;
}