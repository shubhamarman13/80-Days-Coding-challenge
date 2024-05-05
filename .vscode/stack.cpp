#include<iostream>
using  namespace std;
struct Node 
{
int roll;
struct Node *next;
int marks;
};
int main()
{
Node *node[3];
for (int  i = 0; i < 3; i++)
{
    node[i]=new Node;
    cout<<"Enter the detail of the student "<<i+1<<endl;
    cout<<"Roll No: "<<endl;
    cin>>node[i]->roll;
    cout<<"Marks: "<<endl;
    cin>>node[i]->marks; 
}
cout<<"*******Here is the Inputed data********"<<endl;
for (int i = 0; i < 3; i++)
{
    cout<<"Roll: "<<node[i]->roll<<endl;
    cout<<"Marks:"<<node[i]->marks<<endl;
    
}

}