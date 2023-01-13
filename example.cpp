#include <iostream>
using namespace std;
float discount(string day, string month, int amount);

main()
{
    string day, month;
    int amount;
    cout << "enter day:";
    cin >> day;
    cout << "enter month:";
    cin >> month;
    cout << "enter total amount:";
    cin >> amount;
    float pay = discount(day, month, amount);
    cout << "pay :" << pay;
}
float discount(string day, string month, int amount)
{
    float payable = amount;
    if (day == "sunday" && (month == "october" || month == "march" || month == "august"))
    {
        float dis = (amount * 10) / 100;
        payable = amount - dis;
        return payable;
    }
    if (day == "monday" && (month == "november" || month == "december"))
    {
        float dis = (amount * 5) / 100;
        payable = amount - dis;
        return payable;
    }
    else
    {
        return payable;
    }
    return payable;
}
