#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char num;
    cout << "enter the number to check" << endl;
    cin >> num;
    if(isdigit(num)){
    if(num & 0x1){
        cout << num << "is odd" << endl;
    }
    else
        cout << num << "is even" << endl;

}
else
    cout << "enter a valid number number to check" << endl;
}