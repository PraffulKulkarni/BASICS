experiment: 11
//classes and objects
//prafful kulkarni(099)
//program to define a class:
 #include <iostream>
using namespace std;
class Name
 
{ 
  public:
  string firstName="PRAFFUL";
  string lastName="KULKARNI";
  int birthyear=2004;
};
int main()
{
  Name myName;
  cout<<"Name Details: "<<myName.firstName<<" "<<myName.lastName<<" ("<<myName.birthyear<<")"<<endl;
  return 0;
}

//output:
 Name Details: PRAFFUL KULKARNI (2004)


// function/method inside a class:
#include <iostream>
using namespace std;
class Name
 
{ 
  public:
  string firstName="PRAFFUL";
  string lastName="KULKARNI";
  int birthyear=2004;
 
 void displayInfo()
{
  Name myName;
  cout<<"Name Details: "<<myName.firstName<<" "<<myName.lastName<<" ("<<myName.birthyear<<")"<<endl;
   
}
};
int main(){
  Name myName;
  myName.displayInfo();
  return 0;
}

// output:
Name Details: PRAFFUL KULKARNI (2004)


// private and public variables in class:
#include <iostream>
using namespace std;
class Rectangle
 
{ 
  private:
   double length;
   double width;
  public:
   void setDimensions(double len,double wid){
     length=len;
     width=wid;
   }
   double calculateArea(){
     return length*width;
     
   }
};
int main(){
  Rectangle rect;
  rect.setDimensions(5.0,4.0);
  cout<<"Area: "<<
  rect.calculateArea()<<endl;
  return 0;
}

//output:
Area: 20

// car info :

  #include <iostream>
using namespace std;
class Car
 
{ 
  public:
  string make;
  string model;
  void userInput()
  {
    cout<<"enter name of car: ";
    cin>>make;
    cout<<"enter brand of car: ";
    cin>>model;
  }
 void displayInfo()
{
   
  cout<<" Car Details: "<<make<<" "<<model<<endl;
}

};
int main(){
  Car myCar;
  myCar.userInput();
  myCar.displayInfo();
  return 0;
}
//output:
enter name of car: creta
enter brand of car: hyundai
 Car Details: creta hyundai
