#include <iostream>
#include<climits>
using namespace std;

int main()
{ /*int size;
cout<<"enter the size"<<endl;
cin>>size;
    int arr[100];
    cout<<"enter the array elements:"<<" "<<endl;
    for (int i=0;i<size; i++){
        cin>>arr[i];
    }
    cout<<" the array elements are:"<<"  "<<endl;
    for (int i=0;i<size; i++){
        cout<<arr[i]<<endl;
    }
    int min = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    cout << "the min ele is:" << min << endl;*/
    // findinf size of the array
    int arr[]={8,4,6,2,6,545,34};
    cout<<sizeof(arr)/sizeof(arr[0])<<" ";
    return 0;
}
