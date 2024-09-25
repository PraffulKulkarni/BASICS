exp 14:
## AIM
To learn about inheritance and its type in c++.

## Software Used
Online compiler

## Problem Codes
1.) Write a c++ code to do single inheritence.

2.) Write a c++ code to do multiple inheritance.

3.) Write a c++ code to do multilevel inheritance.

4.) Write a c++ code to do hierarchical inheritance.

## Theory
The capability of a class to derive properties and characteristics from another class is called Inheritance. Inheritance is one of the most important features of Object Oriented Programming in C++. In this article, we will learn about inheritance in C++, its modes and types along with the information about how it affects different properties of the class.
# codes:
~~~//Single Inheritance
 #include<iostream>
 using namespace std;
 class Student{
     public:
     void study(){
         cout<<"Student is studying"<<endl;
     }
     };
     class Name:public
    Student{
         public:
         void Prafful(){
             cout<<"Name  is Prafful"<<endl;
         }
     };
     int main(){
         Name d;
         d.study();
         d.Prafful();
         return 0;
     
 }
 ~~~
 //output:
 ![image](https://github.com/user-attachments/assets/e68d790d-3ba2-4d06-a361-03b6bebfefca)

 ~~~//Multilevel Inheritance:
 #include<iostream>
  
 using namespace std;
 class Cheetah{
     public:
     void run(){
         cout<<"Cheetah is running"<<endl;
         
     }
 };
 class cat: public
 Cheetah{
     public:
     void meow(){
         cout<<"Cat is meowing"<<endl;
     }
 };
 class Kohli:public
 cat{
     public:
     void goat(){
         cout<<"Kohli is goat"<<endl;
         
     }
 };
 int main(){
    Kohli d;
     d.run();
     
     d.goat();
          d.meow();
 }
~~~

 //output:
 ![image](https://github.com/user-attachments/assets/cc0597c4-08f2-4ce9-96b0-d7233a21b048)


 ~~~//Hierarchial Inheritance:
  #include<iostream>
 using namespace std;
 class Colour{
     public:
     void red(){
         cout<<"Colour is red"<<endl;
         
     }
 };
 class selfchoice:public Colour{
     public:
     void white(){
         cout<<"Colour is white"<<endl;
         
     }
 };
 class userschoice:public Colour{
     public:
     void black(){
         cout<<"Colour is black"<<endl;
         
     }
 };
 int main(){
     selfchoice d;
     userschoice c;
     d.red();
     d.white();
     c.red();
     c.black();
     return 0;
 }
~~~
//output:
![image](https://github.com/user-attachments/assets/f6fab798-e059-40ff-87a1-984054a30da0)

~~~//Multiple:
#include <iostream>
using namespace std;

class Engine {
    public :


    void start(){
        cout<< "Engine starts"<<endl;
        

    }
};
class Transmission{
    public:
   void shiftGear(){
    cout<<"Transmission shifts gear"<<endl;
   }
   };

    class Car : public Engine, public Transmission {
        public:
        void drive(){
            cout<<"Car is being driven"<<endl;
        }
    };

int main()

{
    Car d;
    d.shiftGear();
    d.drive();
    return 0;
}
~~~
//output:
![image](https://github.com/user-attachments/assets/49a585e8-21b2-407f-bb9f-dcb620e92f6c)

## conclusion:
we learnt about different types of inheritance.
