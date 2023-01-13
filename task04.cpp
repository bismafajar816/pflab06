#include <iostream>
using namespace std;
string checkspeed(float speed);
main()
{
 float speed ;
 cout <<"enter speed :";
 cin >> speed;
string imp = checkspeed( speed);
cout <<"your car is:"<<imp;




}
string checkspeed(float speed)
{
 string impression;   
 if(speed <= 10)
 {
    impression = "slow";
 }
 else if(speed > 10 && speed <50)
 {
    impression = "average";
 }
 else if(speed >= 50 && speed < 150 )
 {
    impression = "fast";
 }
 else if(speed > 150 && speed < 1000)
{
    impression = "ultra fast";
}
else
{
    impression = "extremely fast";
}
return impression;


}
