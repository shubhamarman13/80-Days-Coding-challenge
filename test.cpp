#include<iostream>
using namespace std;
struct Node 
{
    Node *next;
    int marks;
    // int roll;
};
int main()
{
     Node *head;
     head->marks=55;
    //  head->roll=2;
     head->next=NULL;
// cout<<"shubham";
// cout<<head->roll<<endl;
cout<<head->marks<<endl;
cout<<head->next<<endl;

return 0;

}