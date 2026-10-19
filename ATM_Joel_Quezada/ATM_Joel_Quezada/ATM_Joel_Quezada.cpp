#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

bool isValidPin(string x, string password)
{
    if (x == password)
    {
        return true;
    }
    else
    {
        return false;
    }
}

string thePassword()
{
    string x;
    cout << "Enter Password: ";
    cin >> x;
    return x;
}

int main()
{
    string pass = thePassword();

    while (true)
    {
        string pin;
        cout << "Enter Pin: ";
        cin >> pin;

        if (isValidPin(pin, pass))
        {
            cout << "Valid Pin!" << endl;
            break;
        }
        else
        {
            cout << "Invalid Pin!" << endl;
        }
    }
}