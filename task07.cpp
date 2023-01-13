#include <iostream>
using namespace std;
float checkprice(string item, string city, int amount);

main()
{
    string item, city;
    int amount;
    cout << "enter item name coffee water beer sweets or peanuts: ";
    cin >> item;
     cout << "enter city name sofia plodiv or varna:";
    cin >> city;
    cout << "enter amount :";
    cin >> amount;
    float pay;
    pay =  checkprice(item, city, amount);
    cout<< pay;
}
float checkprice(string item, string city, int amount)
{
    float price = 0;
    if (city == "sofia")
    {
        if (item == "coffee")
        {
            price = amount * 0.50;
        }
        if (item == "water")
        {
            price = amount * 0.80;
        }
        if (item == "beer")
        {
            price = amount * 1.20;
        }
        if (item == "sweets")
        {
            price = amount * 1.45;
        }
        if (item == "peanuts")
        {
            price = amount * 1.60;
        }
        return price;
    }
    if (city == "plodiv")
    {
        if (item == "coffee")
        {
            price = amount * 0.40;
        }
        if (item == "water")
        {
            price = amount * 0.70;
        }
        if (item == "beer")
        {
            price = amount * 1.15;
        }
        if (item == "sweets")
        {
            price = amount * 1.30;
        }
        if (item == "peanuts")
        {
            price = amount * 1.50;
        }
         return price;
    }
    if (city == "varna")
    {
        if (item == "coffee")
        {
            price = amount * 0.45;
        }
        if (item == "water")
        {
            price = amount * 0.70;
        }
        if (item == "beer")
        {
            price = amount * 1.10;
        }
        if (item == "sweets")
        {
            price = amount * 1.35;
        }
        if (item == "peanuts")
        {
            price = amount * 1.55;
        }
        return price;
    }
}