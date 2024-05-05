#include <iostream>
using namespace std;
int main()
{
    int num, temp=0;
    cout << "Enter the number: \n";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            temp++;
            cout << i << " , ";
        }
    }

    cout << endl
         << "Total factors = " << temp;
}
