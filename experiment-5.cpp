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

// program to ceck the grade:
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


