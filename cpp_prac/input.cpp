#include<iostream>


int add(int b,int a){
    return a+b;
}

int main(){
    int num1=3.12,sum=0;
    float num2;
    std::cout<<"enter the number"<<std::endl;
    std::cin>>num1>>num2;
    sum=add(num1,num2);
    std::cout<<"sum is "<<sum<<std::endl;
    std::clog;
    return 0;
}