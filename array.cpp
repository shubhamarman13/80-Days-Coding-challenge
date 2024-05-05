#include<iostream>
using namespace std;
int deleting_last(int arr[] , int size)
     {
        
     }
int main()
{
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int arr[size];
    for (int i = 0; i <= size-1; i++)
    {
        cout<<"Enter the value "<<endl;
        cin>>arr[i];
    }
        cout<<endl<<" valuew are  "<<endl;
    
    for (int i = 0; i <= size-1; i++)
    {
        cout<<arr[i]<<" ";
    }
     size--;
     cout<<"Last element deleted \n";
      for (int i = 0; i <= size-1; i++)
    {
        cout<<arr[i]<<" ";
    }
    // cout<<"shubham";
    return 0;
}