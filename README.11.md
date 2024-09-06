# AIM
To learn about object oriented programing using class and methods.

# Software Used
online compiler

# Problem Statements
1.) Write a c++ program to show car details using class.

2.) Write a c++ program to make a class by using function.

3.) Write a c++ program to calculate are of rectangle using class.

4.) Write a c++ program to make a class by taking inputs from user.

# Theory:
Classes in C++: Declaration And Implementation of Classes
Lesson 2 of 24By Ravikiran A S

 
A class is a user-defined data type representing a group of similar objects, which holds member functions and variables together.
In other words, a class is a collection of objects of the same kind. For example, Facebook, Instagram, Twitter, and Snapchat all come under social media class.
Objects of a Class
An object is a recognizable entity having a state and behavior, and these objects hold variables of a class in accordance with the access modifiers.
It is also known as an instance of a class. 

You can call a member function with the help object and use the dot operator.

During the declaration of the class, no memory is assigned, but when you create an object, then the memory is allocated.

# Codes:
~~~//CAR DETAILS 1st :
 #include<iostream>
using namespace std;
class Car
{
    public:
    string make = "Hyundai";
    string model = "Creta";
    int year = 2016;
};
int main()
{
    Car myCar;
    cout<<"Car Details: "<<myCar.make<<" " <<myCar.model<<" ("<<myCar.year<<")"<<endl;
    return 0;
}
~~~


 //output:
 ![image](https://github.com/user-attachments/assets/1400b420-4c91-49e1-b754-cbb296d86007)


~~~//CLASS BY FUNCTION ex of student:
  #include<iostream>
using namespace std;
class Student{
    public:

    string name = "Prafful";
    string surname = "Kulkarni";
    string division = "B";
    int year = 2004;
    

    void displayInfo(){
cout<< "Student details:- "<<endl;
cout<<"name: "<<name <<endl; 
cout <<"surname: "<< surname<<endl;
 cout <<"division "<< division<<endl;
 cout <<"birth "<<year<<endl;
    }
};
    int main()
    {
        Student myStudent;
        myStudent.displayInfo();
        return 0;
    }
~~~

    output:
    ![image](https://github.com/user-attachments/assets/3ea028e5-083d-463d-ada5-b93639901927)


~~~//AREA OF RECTANGLE
#include<iostream>
using namespace std;
class Rectangle{
    private:
    double length;
    double width;

    public:
    void setDimensions(double len,double wid){
        length = len;
        width = wid;
    }
    double calculateArea(){
return length*width;
    }
};
int main() {
    Rectangle rect;
    rect.setDimensions(4.0, 7.0);
    cout<< "Area: "<<rect.calculateArea()<<endl;
    return 0;
}
~~~
//output:
![image](https://github.com/user-attachments/assets/40dbeb7b-f2f2-4bc1-9404-adfc038387e2)

 

~~~//USER CLASS
#include<iostream>
using namespace std;
class Car{
  public:
  string make;
  string model;
  int year;
  void userInput(){
  cout<<"Enter car make: "<<endl;
  cin>>make;

cout<< "Enter car model: "<<endl;
cin>>model;

cout<<"Enter car manufacturing year: "<<endl;
cin>>year;
  }
  
void displayInfo(){
    cout<<"Car Details: "<<make<<" "<< model<< " "<<"("<<year<<")"<<endl;

}

};
int main()
{
    Car myCar;
    myCar.userInput();
    myCar.displayInfo();
    return 0;
}
~~~
//output:
 ![image](https://github.com/user-attachments/assets/5e8dfb31-0860-47a4-a86a-5ea24f9cf2e3)

 # Conclusion:
 In this experiment we learnt how to describe a class and objects for desired output. 
