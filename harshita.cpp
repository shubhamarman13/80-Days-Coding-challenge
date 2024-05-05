#include <iostream>
using namespace std;
#define size 50
#define TOP -1
int arr[size];
int top = TOP;

int push(int val)
{
    if (top == size - 1)
    {
        cout << "Stack overflow\n";
        return -1;
    }
    else
    {
        top++;
        arr[top] = val;
        return 0;
    }
}

void pop()
{
    if (top == TOP)
    {
        cout << "Stack underflow-- Empty Stack\n";
    }
    else
    {
        top--;
    }
}

void display()
{
    if (top == TOP)
    {
        cout << "Stack is Empty\n";
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
}
int main()
{
    int choice;
    int val;
    do
    {
        
    cout << "Enter operation:" << endl;
    cout << "1. push" << endl;
    cout << "2. pop" << endl;
    cout << "3. display" << endl;
    cout << "4. exit" << endl;
    cout << "Your choice: ";
    cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to push: ";
            cin >> val;
            push(val);
            break;
        case 2:
            pop();
            break;
        case 3:
        cout<<endl<<"hers is the Stack"<<endl;
            display();
            cout<<endl;
            break;
        case 4:
        
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice\n";
        }

    } while (choice != 'e' && choice != 'E');

    return 0;
}