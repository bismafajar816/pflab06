#include <iostream>
using namespace std ;
float totalincome(string type , int rows, int columns);
main()
{
string type;
int rows, columns;
cout <<"enter screening type:";
cin >> type;
cout <<"enter rows:";
cin >> rows;
cout <<"enter columns:";
cin >> columns;
float pay = totalincome( type , rows,columns);
cout <<"income is:"<<pay;

}
float totalincome(string type , int rows, int columns)
{
 float income;
 if(type == "premiere")
 {
  float price = rows * columns* 12.00;
   income = price;

 }
 if(type == "normal")
 {
  float price = rows * columns * 7.50;
  income = price;

 }
 if(type == "discount")
 {
    float price = rows * columns * 5.00;
    income = price ;
 }
return income;




}