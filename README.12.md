Prafful Kulkarni
# AIM
To learn about costructor and destroctor in c++.

# Software Used
online compiler

# Problem Statement
1.) Write a c++ program to define constructor.

2.) Write a c++ program using parameterized constructior.

3.) Write a c++ program using copy constructor.

4.) Write a c++ program for default argument.

5.) Write a c++ program to calculate area of rectangle using class.

6.) Write a c++ program using deconstructor.

# Theory
Constructor: A constructor is a member function of a class that has the same name as the class name. It helps to initialize the object of a class
It can either accept the arguments or not. It is used to allocate the memory to an object of the class. It is called whenever an instance of the class is created. 
It can be defined manually with arguments or without arguments. There can be many constructors in a class. It can be overloaded but it can not be inherited or virtual.

# codes:
~~~//DEFINE CONSTRUCTOR.
#include<iostream>
using namespace std;
class MyClass{
    public:
    string a;
MyClass(){

    cout<< "Enter your name: "<<endl;
    cin>>a;
    cout<<"Hello "<<a<< " from constructor !!"<<endl;

}
};
int main(){
    MyClass obj;
    return 0;
}
~~~
//output:
![image](https://github.com/user-attachments/assets/6be9641f-da4a-4ad0-83a2-f1d8eef99d11)


~~~//PARAMETERIZED CONSTRUCTOR
#include<iostream>
using namespace std;
class MyClass{
    public:
    int c;
    MyClass(int val)
{
    c = val*val;
    cout<<"Square of "<<val<<" is: "<<c<<endl;
    
}
};
int main() {
    MyClass obj(5);
    return 0;
}
~~~
//output:
![image](https://github.com/user-attachments/assets/83ae29f5-042c-47a2-b3e8-af899daede89)


~~~//COPY CONSTRUCTOR
#include<iostream>
using namespace std;
class MyClass{
    private:
    int value;
    public:
    MyClass(int val){
        value = val;
        cout << "Virat Kohli won the wc "<<value<<endl;

    }
    MyClass(const MyClass &obj){
        value = obj.value;
        cout<<" MS Dhoni<<Virat Kohli "<<value<<endl;
    }
};
int main(){
    MyClass obj1(2024);
    MyClass obj2 = obj1 ;
    return 0;
    }

~~~
// output: ![image](https://github.com/user-attachments/assets/dc25d777-1120-43fb-84f6-b482b161dbec)



~~~//DEFAULT ARGUMENT
#include<iostream>
using namespace std;
class MyClass{
    private:
    int value1;
    int value2;
    string str1;
    public:
    
    MyClass( int val1= 0, int val2= 0, string a = "none"){
        str1 = a;
        value1= val1;
        value2 = val2;
        cout<<str1<<" played "<<value1<<"  matches."<<endl;
        cout<<"He scored "<< value2 << " goals."<<endl;

    }
};
int main()
{
   
    MyClass obj1(1900,900, "Ronaldo");
    return 0;
    }
~~~
//output:
![image](https://github.com/user-attachments/assets/98b9af6f-216a-49f5-bf20-8cf1c930613e)

~~~//AREA OF RECTANGLE
#include<iostream>
using namespace std;
class MyClass{
    private:
    int l;
    int b;



    public:
int s,w;
void getinput()
         { 
            cout<<"Enter length and breadth"<<endl;
            cin>>s>>w;
         }

         void display()
         { int a;
         l=s;
         b=w;
    
            a = l*b;
         cout<<"Area of rectangle is: "<< a<< endl;
         }
};
int main(){
    
    MyClass obj1;
    obj1.getinput();
    obj1.display();

    return 0;
    }
~~~
  //output:
  ![image](https://github.com/user-attachments/assets/a546ef4f-554a-42ec-978d-8228f8bd4067)


~~~//DECONSTURCTOR
#include<iostream>
using namespace std;
class MyClass{
    public:
    ~MyClass(){
        cout<<"Destructor called! "<< endl;
    }
    MyClass(){
        cout<<"Constructor called!"<<endl;

    }
    };
    int main(){
        MyClass obj;
        return 0;
    }
~~~
//output:
![image](https://github.com/user-attachments/assets/f2738aa8-2d92-4542-8382-5f736f2f9062)
