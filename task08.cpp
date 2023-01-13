#include <iostream>
using namespace std;
float budget(int amount, string type, int number);
main()
{
    int amount, number;
    string type;
    cout << "enter your budget:";
    cin >> amount;
    cout << "enter vip or normal type:";
    cin >> type;
    cout << "enter number of people:";
    cin >> number;

    float pay = budget(amount, type, number);
    cout << pay;
}
float budget(int amount, string type, int number)
{
    float totalleft = 0;
    double total;
    float ticketprice;
    float left = 0;
    if (type == "vip" && (number >= 1 || number <= 4))
    {
        total = amount * 0.75;
        totalleft = amount - total;
        ticketprice = number * 499.99;
        left = totalleft - ticketprice;
    }
    if (type == "vip" && (number >= 5 || number <= 9))
    {
        total = amount * 0.60;
        totalleft = amount - total;
        ticketprice = number * 499.99;
        left = totalleft - ticketprice;
    }
    if (type == "vip" && (number >= 10 || number <= 24))
    {
        total = amount * 0.50;
        totalleft = amount - total;
        ticketprice = number * 499.99;
        left = totalleft - ticketprice;
    }
    if (type == "vip" && (number >= 25 || number <= 49))
    {
        total = amount * 0.40;
        totalleft = amount - total;
        ticketprice = number * 499.99;
        left = totalleft - ticketprice;
    }
    if (type == "vip" && number >= 50)
    {
        total = amount * 0.20;
        totalleft = amount - total;
        ticketprice = number * 499.99;
        left = totalleft - ticketprice;
    }
    if (type == "normal" && number == 1 )
    {
        total = amount * 0.75;
        totalleft = amount - total;
        ticketprice = number * 249.99;
        left = totalleft - ticketprice;
    }
    if (type == "normal" && (number >= 5 || number <= 9))
    {
        total = amount * 0.60;
        totalleft = amount - total;
        ticketprice = number * 249.99;
        left = totalleft - ticketprice;
    }
    if (type == "normal" && (number >= 10 || number <= 24))
    {
        total = amount * 0.50;
        totalleft = amount - total;
        ticketprice = number * 249.99;
        left = totalleft - ticketprice;
    }
    if (type == "normal" && (number >= 25 || number <= 49))
    {
        total = amount * 0.40;
        totalleft = amount - total;
        ticketprice = number * 249.99;
        left = totalleft - ticketprice;
    }
    if (type == "normal" && number >= 50)
    {
        total = amount * 0.20;
        totalleft = amount - total;
        ticketprice = number * 249.99;
        left = totalleft - ticketprice;
    }
    if (left > 0)
    {
        left = totalleft - ticketprice;
        cout << "sufficient money";
    }
    if (left < 0)
    {
        left = ticketprice - totalleft;
        cout << "not enough money you need ";
    }
    return left;
}