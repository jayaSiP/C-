#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<< "enter your age"<<endl;
    cin>> age;
    if(age<18){
        cout<< "you are not elliglble for scholarship";
    }
    else if(age==18){
        cout<< "You will get an scholarship partially";
    }
    else{
        cout<< "You are eligible for scholarship";
    }
    return 0;
}
