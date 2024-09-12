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

//Program 2 (Operator Overloading)
#include<iostream>
using namespace std;
class Complex
{
    private:
    float real;
    float imag;
    public:
    Complex(float r = 0, float i = 0)
    {
        real = r;
        imag = i;
    }
    Complex operator + (const Complex &obj)
    {
        Complex temp;
        temp.real = real+obj.real;
        temp.imag = imag+obj.imag;
        return temp;
    }
    void display()const
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main()
{
    Complex c1(3.5, 2.5);
    Complex c2(1.6, 3.7);
    Complex c3 = c1+c2;
    cout<<"First complex number: ";
    c1.display();
    cout<<"Second complex number: ";
    c2.display();
    cout<<"Third complex number: ";
    c3.display();
}
//output:
![image](https://github.com/user-attachments/assets/9fd713e4-10dd-40c2-811d-084814e8b521)

# Conclusion:
we learnt how overload constructor.
