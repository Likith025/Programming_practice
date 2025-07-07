#include<iostream>
using namespace std;

int fact(int number){
    if(number<=1){
        return  1;
    }
    else{
        return number*fact(number-1);
    }
}

int main(){
    int number=0;
    int factorial=1;
    int factorial_2=1;
    cout << "entre the number to find factorial" << endl;
    cin >> number;
    if(number>=0){
    for(int i= number;i>=1;i--){
        factorial*=i;
    }
    cout << "factorial of using loop " << number << "is " << factorial << endl;
    factorial_2=fact(number);
    cout << "factorial of using recursive " << number << "is " << factorial_2 << endl;
}
else{
    cout << "enter a positive number" << endl;
}
}
