//CAR DETAILS 1st :
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
//output:
Car Details: Mahindra Thar (2023)

//CLASS BY FUNCTION ex of student:
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

    //output:
    Student details:- 
name: Prafful
surname: Kulkarni
division B
birth 2004


//AREA OF RECTANGLE
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
//output:
Area: 28

//USER CLASS
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
//output:
Enter car make: 
Hyundai
Enter car model: 
Creta
Enter car manufacturing year: 
2000
Car Details: Hyundai Creta (2000)
