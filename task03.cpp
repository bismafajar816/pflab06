#include <iostream>
using namespace std;
string checktitle(float age, char gender);
main()
{
 float age;
 char gender;
 cout <<"enter age:";
 cin >> age;
 cout <<"enter m for male and f or female:";
 cin >> gender;
 string status = checktitle( age,  gender);
 cout <<"title is:"<<status;

}
string checktitle(float age, char gender)
{
     string title;
 if( age >= 16 && gender == 'm')
{
    title = "Mr. a man";
}
if(age < 16 && gender == 'm')
{
    title = "master a boy";
}
if(age >= 16 && gender == 'f')
{
    title = "Ms. a woman";
}
if(age < 16 && gender == 'f')
{
    title = "Miss a girl.";
}
return title;
}

