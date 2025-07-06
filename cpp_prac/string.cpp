#include <iostream>


int main() {
    int age;
    std::string name;
    std::cout<<"enter the name"<<std::endl;
    std::getline(std::cin,name); //to read a string with space
    std::cout<<"entered name is " << name<<std::endl;

}
