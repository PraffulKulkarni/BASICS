// prafful kulkarni
// 2307012099
//entc b1
//experiment 5:- To study and implement C++ decision making statements

// to check if the entered password is correct or wrong:

#include<iostream>
using namespace std;
int main()
{
string password;
cout<<"enter your password: ";
cin>> password;
if(password==" secret")
{
cout<< "access granted";
}
else
{

cout<<"access denied";
}
}
//output:
enter your password: iowef
access denied

// program to check the grade:
#include <iostream>
using namespace std;
int main()
{
int score;
cout<<"enter your score: ";
cin>> score;
if(score>=90){
cout<< "Grade: A"<< endl;}
else if(score>=80){
cout<< "Grade: B"<< endl;}
else if(score>=70){
cout<< " Grade: C"<<endl;}
else{
cout<< "Grade: F"<<endl;
}
}

//Output:
enter your score: 79
 Grade: C

switch calculator:

\\Prafful kulkarni
\\23070123099
#include<iostream>
using namespace std;
int main()
{
    float a,b,c ;

    int choice;
    cout << "Calculator"<<endl;
    cout << "1: Addition"<<endl;
    cout << "2: Subtraction"<<endl;
    cout << "3: Multiplication"<<endl;
    cout << "4: Division"<<endl;
    cout<<"Enter operation choice: ";
    cin>>choice;
switch(choice)
{
    case 1 :
    { float c;
    cout<<"Enter numbers: ";
    cin>>a>>b;
    c=a+b;
    cout<<"sum is = "<<c;
    } 
    break;
    case 2 :
    {
        float c;
    cout<<"Enter numbers: ";
    cin>>a>>b;
    c=a-b;
    cout<<"difference is = "<<c;
    }
    break;
case 3 :
{ float c;
    cout<<"Enter numbers: ";
    cin>>a>>b;
    c=a*b;
    cout<<"product is = "<<c;
}
break;
case 4 :

{ float c;
   cout<<"Enter numbers: ";
    cin>>a>>b;
    c=a/b;
    cout<<"quotient is = "<<c;
    }
    break ;
}
return 0;
}

output:
Calculator
1: Addition
2: Subtraction
3: Multiplication
4: Division
Enter operation choice: 3
Enter numbers: 2
3
product is = 6

 week program:
#include<iostream>
using namespace std;
int main()
{
    int a,b,c, choice ;
    cout << "DAY"<<endl;
    cout << "1: Monday"<<endl;
    cout << "2: Tuesday"<<endl;
    cout << "3: Wednesday"<<endl;
    cout << "4: Thursday"<<endl;
    cout << "5: Friday"<<endl;
    cout << "6: Saturday"<<endl;
    cout << "7: Sunday"<<endl;
    cout<<"Enter of day: ";
    cin>>choice;
switch(choice)
{
{ case 1 :
cout<< "Day is Monday";
}
break ;
{ case 2 :
cout<< "Day is Tuesday";
}
break ;
{ case 3 :
cout<< "Day is Wednesday";
}
break ;{ case 4 :
cout<< "Day is Thursday";
}
break ;
{ case 5 :
cout<< "Day is Friday";
}
break ;
{
 case 6 :
cout<< "Day is Saturday";
}
break ;
{ case 7 :
cout<< "Day is Sunday";
}
}
}

OUTPUT:
DAY
1: Monday
2: Tuesday
3: Wednesday
4: Thursday
5: Friday
6: Saturday
7: Sunday
Enter of day: 3
Day is Wednesday

LEAP YEAR PROGRAM:

#include<iostream>
using namespace std;
int main()
{
    int y;
    char c;
    cout<<"Enter year to check: ";
    cin>>y;
    if ( y%4==0 && y%100!=0 || y%400==0 )
    { cout<<y<<" is a leap year";}
    else
    { cout<<y<<" is not a leap year";}
    return 0;
}

OUTPUT:
Enter year to check: 2006
2006 is not a leap year


