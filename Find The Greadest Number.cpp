#include <iostream>
using namespace std;

int main ()
{
    cout << "====================\n";
    cout << "Find Greadest Number\n";
    cout << "====================\n";

    int num1, num2, num3;

    cout << "Enter Numebr [1] : ";
    cin >> num1;
    cout << "Enter Numebr [2] : ";
    cin >> num2;
    cout << "Enter Numebr [3] : ";
    cin >> num3;

    if (num1 > num2 && num1 > num3)
    {
        cout << "Number [ " << num1 << " ] Is The Greadest Number\n";
    }else if (num2 > num1 && num2 > num3)
    {
        cout << "Number [ " << num2 << " ] Is The Greadest Number\n";
    }else if (num3 > num1 && num3 > num2)
    {
        cout << "Number [ " << num3 << " ] Is The Greadest Number\n";
    }else if (num1 == num2 && num1 == num3)
    {
        cout << "Number [ " << num1 << " ] = Number [ " << num2 << " ] = Number [ " << num3 << " ]\n";
    }
    return 0;
}