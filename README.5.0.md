# Aim
To learn the execution and use of if statements & switch in c++.

# Software Used
VS Code

# Problem Statement
1.) Write a c++ program to check if the year is a leap year. 
2.) Write a c++ program to validate the password.
3.) Write a c++ program to print days of week.
4.) Write a c++ program to make a simple calculator.
5.) Write a c++ program to evaluate grades.

# Theory
Use if to specify a block of code to be executed, if a specified condition is true.

Use else to specify a block of code to be executed, if the same condition is false.

Use else if to specify a new condition to test, if the first condition is false.

Use switch to specify many alternative blocks of code to be executed.

The switch statement in C++ is a flow control statement that is used to execute the different blocks of statements based on the value of the given expression.
We can create different cases for different values of the switch expression. 
We can specify any number of cases in the switch statement but the case value can only be of type int or char.

# codes:
// prafful kulkarni
// 2307012099
//entc b1
//experiment 5:- To study and implement C++ decision making statements

// to check if the entered password is correct or wrong:
~~~
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
~~~
//output:
![image](https://github.com/user-attachments/assets/b2b3004e-d212-411f-a4d5-fc9d8ac98742)


~~~// program to ceck the grade:
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
~~~

//Output:
![image](https://github.com/user-attachments/assets/cea1578c-6204-4c96-bae0-e566b0c7f51b)


switch calculator:

~~~\\Prafful kulkarni
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
~~~
output:
 ![image](https://github.com/user-attachments/assets/81e7744a-d92d-465b-ba86-bc80f0799487)


~~~ week program:
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
~~~

OUTPUT:
![image](https://github.com/user-attachments/assets/e4994927-ff93-4417-8982-c9b032e2a572)


~~~LEAP YEAR PROGRAM:

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
~~~
OUTPUT:
![image](https://github.com/user-attachments/assets/f04d5965-48ae-41cc-b6f7-83f57d3232a4)

