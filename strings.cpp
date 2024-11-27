#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstname ;
    string lastname;
    cout << "enter the first name:" << endl;
    cin >>  firstname;
    cout << "enter last name:" << endl;
    cin >>  lastname;
     // for concatenate function 
     string fullname = firstname + " " + lastname;
    cout <<"full name is:"<< fullname<<endl;
    // for append function
    string fullnme;
     fullnme.append(firstname).append(" ").append(lastname);
    cout<<"full name is:"<<fullnme<<endl;
    // string concatenate with numbers
    string num= "20";
    string num1= "30";
    string num3 = num+ num1;
    cout<<num3<<endl;
    // to find out the length of a string size() , lenght() both can be used
    
    cout<<fullname.length()<<endl;
    cout<<fullname.size()<<endl;
    cout<<fullname[9]<<endl;
    cout<<fullname.at(8)<<endl;
    fullname[8] = 'e';
    cout<<fullname<<endl; 
    // for using special characters
    cout<<"it\'s official now"<<endl;
    cout<<"its \"official\" now"<<endl;
    cout<<"it\\s official now"<<endl;
    return 0;
}
