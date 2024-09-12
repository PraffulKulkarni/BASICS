Prafful Kulkarni
# Aim:
To study and implement constructor overloading.

# Theory:
Constructor overloading in object-oriented programming is a feature that allows a class to have more than one constructor, each with a different parameter list.

This means you can create objects in different ways, depending on the arguments passed when the object is instantiated.

# CODE:

~~~//Program 1 (Function Overloading)
#include<iostream>
using namespace std;
int add(int a, int b)
{
    return a+b;
}
float add(float a,float b)
{
    return a+b;
}
int add(int a, int b, int c)
{
    return a+b+c;
}
int main()
{
    cout<<"Addition of 2 integers: "<<add(3,4)<<endl;
    cout<<"Addition of 2 floats: "<<add(3.5f, 4.5f)<<endl;
    cout<<"Addition of 3 integers: "<<add(1, 2, 3)<<endl;
    return 0;
}
~~~
//output:
![image](https://github.com/user-attachments/assets/4f7683e0-8785-43fa-ba3b-7e339bc04259)
