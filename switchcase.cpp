#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<< "enter your age"<<endl;
    cin>> age;
    switch (age)
    {
    case 18:
    cout<< "You will report on 20 may"<<endl;
        break;
    case 21:
    cout<< "You will report on 24 may" <<endl;
        break;
    case 23:
    cout<< "You will report on 24 may"<<endl;
        break;
    case 25:
    cout<< "You will report on 28 may"<<endl;
        break;
    default:
    cout<< "Sorry you are not shortlisted"<<endl;
        break;
    }
    return 0;
}
