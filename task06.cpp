#include <iostream>
using namespace std;
float charges(int distance, string time);
main()
{
    int distance;
    string time;
    cout << "enter km distance:";
    cin >> distance;
    cout << "enter day or night:";
    cin >> time;
    float pay = charges(distance, time);
    cout << "minimum fare is:" << pay;
}
float charges(int distance, string time)
{
    float charge;
    if (distance <= 20 && time == "day")
    {
        charge = (distance * 0.79) + 0.70;
    }
    if (distance <= 20 && time == "night")
    {
        charge = (distance * 0.90) + 0.70;
    }
    if (distance > 20)
    {
        charge = distance * 0.09;
    }
    if (distance >= 100)
    {
        charge = distance * 0.06;
    }
    return charge;
}