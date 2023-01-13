#include <iostream>
using namespace std;
int isgreatest(int num1, int num2, int num3);
main()
{
    int num1, num2, num3;
    cout << "enter number 1:";
    cin >> num1;
    cout << "enter number 2:";
    cin >> num2;
    cout << "enter number 3:";
    cin >> num3;
    int greater = isgreatest(num1, num2, num3);
    cout << greater;
}
int isgreatest(int num1, int num2, int num3)
{
   int greatest;
    if (num1 > num2 && num1 > num3)
    {
     int   greatest = num1;
    }
   else  if (num2 >num1 && num2 > num3)
    {
      int  greatest = num2;
    }
   else if (num3 > num1 && num3 > num2)
    {
      int  greatest =num3;
    }
    else
    {
     greatest = num3;
    }
    return greatest;
}
