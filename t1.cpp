#include <iostream>
using namespace std;

main()
{
    string brand;
    int rollnumber;
    cout << "enter roll number:";
    cin >> rollnumber;
    cout << "enter name:";
    cin >> brand;
    if (rollnumber == 501)
    {
        if (brand == "ali")
        {
            cout << "congratulations ali";
        }
    }
    else
    {
        cout << "invalid user.";
    }
}