#include <iostream>
using namespace std;
int play(string type, int holidays, int hweek);
main()
{
    int holidays, hweek;
    string type;
    cout << "enter leap or normal year:";
    cin >> type;
    cout << "enter holidays:";
    cin >> holidays;
    cout << "weekends at home:";
    cin >> hweek;
    int volleyball = play(type, holidays, hweek);
    cout << volleyball;
}
int play(string type, int holidays, int hweek)
{
    float nothome, home, final, total;
    if (type == "leap")
    {
        nothome = (48 - hweek) * 0.75;
        home = holidays * 0.667;
        final = nothome + home + hweek;
        total = final * 1.15;
    }
    if (type == "normal")
    {
        nothome = (48 - hweek) * 0.75;
        home = holidays * 0.667;
        total = nothome + home + hweek;
    }
    return total;
}