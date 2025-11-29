#include<iostream>
using namespace std;

int main(){
    int len,v_count=0,c_count=0;
    cout<<"enter the length of string"<<endl;
    cin>>len;
    char *str =new char[len+1];
    cout<<"enter the string"<<endl;
    cin>>str;
    char* ptr=str;
    while((*ptr)){
        char ch_lower=tolower(*ptr);
        if((ch_lower=='a'||ch_lower=='e'||ch_lower=='i'||ch_lower=='o'||ch_lower=='u')){
            v_count++;
            
        }
        else{
            c_count++;

        }
        ptr++;

    }
    cout<<"no of vowels is "<<v_count<<" no of consonents "<<c_count<<endl;

    return 0;
}