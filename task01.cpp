#include <iostream>
using namespace std;
char grade(int result);
main()
{
    int result;
    cout << "enter percentage:";
    cin >> result;
    char final = grade(result);
    cout << "grade is:" << final;
}
char grade(int result)
{
    char gra;
    if (result < 50)
    {
        gra = 'F';
    }
    else if (result >= 50 && result <= 60)
    {
        gra = 'E';
    }
    else if (result >= 61 && result <= 70)
    {
        gra = 'D';
    }
    else if (result >= 71 && result <= 80)
    {
        gra = 'C';
    }
    else if (result >= 81 && result <= 85)
    {
        gra = 'B';
    }
    else( result > 85)
    {
        gra = 'A';
    }
     
    return gra;
}