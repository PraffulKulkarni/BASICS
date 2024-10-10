## AIM
To learn about exception handling in c++.

# Problem Statement
1.) Write a c++ program to get a customized error for entering a negative number.

2.) Write a c++ program to get a customized error for entering a year less than 2000.

# Theory
In C++, exceptions are runtime anomalies or abnormal conditions that a program encounters during its execution. The process of handling these exceptions is called exception handling. Using the exception handling mechanism, the control from one part of the program where the exception occurred can be transferred to another part of the code.

So basically using exception handling in C++, we can handle the exceptions so that our program keeps running.
~~~// exception handling:
 #include<iostream>
 using namespace std;
  int main(){
     float n;
      cout<<"enter a positive number: ";
      cin>>n;
       try{
          if(n<0){
              throw n;
          }
          cout<<" enter a positive number; "; 
          
      }
      catch(const float n){
          cout<<"you entered "<<n<<" which is a negative number"<< endl;
      }
          
}
~~~
//output: ![image](https://github.com/user-attachments/assets/b6dd83a4-ae8f-4bac-b58e-c25fd54a5f0b)


~~~//exception handling:
#include<iostream>
 using namespace std;
  int main(){
     int year;
      cout<<"enter year greater than 2000: ";
      cin>>year;
       
      try{
          if(year<2000){
              throw "you entered a year less than 2000";
          }
          cout<<" entered year is: "<<year;
          
      }
      catch(const char *msg){
          cout<<msg;
      }
          
}
~~~
//output:
![image](https://github.com/user-attachments/assets/5ba3b359-490f-45e3-940b-406e25e27e62)
# CONCLUSION:
We learnt hoe to use exception handling in c++ program

