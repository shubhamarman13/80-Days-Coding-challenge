#include <iostream>
using namespace std;
struct Node
{
    Node *next;
    int data;
};
int main()
{
    int size;
    cout << "How many Node do you want ?" << endl;
    cin >> size;
    Node *nodes[size];
    for (int i = 1; i <= size; i++)
    {
        nodes[i] = new Node;
        cout<< "Enter the data of the node: "<<i<<endl ;
        cin >> nodes[i]->data;
        if (i == size)
        {
            nodes[i]->next = NULL;
        }
        else
        {
            nodes[i]->next = nodes[i + 1];
        }
    }
    cout<<"Nodes are Following"<<endl ;
    for (int  i = 1; i<=size; i++)
    {
        cout<<nodes[i]->data<<endl;
    }
    
}