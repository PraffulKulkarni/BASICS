EXPERIMENT 4 To study and implement C++ Bitwise Operators: -
#  Bitwise Operators
Bitwise Operators are the operators that are used to perform operations on the bit level on the integers.
While performing this operation integers are considered as sequences of binary digits. In C++, we have various types of Bitwise Operators.

Bitwise AND (&) Bitwise OR (|) Bitwise XOR (^) Bitwise NOT (~) Left Shift (<<) Right Shift (>>)

1. Bitwise AND (&)
Bitwise AND operation is performed between two integers, It will compare each bit on the same position and the result bit will be set(1) only
and only if both corresponding bits are set(1). The symbol which is used to perform bitwise AND operation is &.

3. Bitwise OR (|)
If Bitwise OR operation is performed between two integers , It will compare each bit on same position and the result bit will be set(1) if any of corresponding bits are set(1).
 The symbol which is used to perform bitwise OR operation is |.

5. Bitwise XOR (^)
If Bitwise XOR operation is performed between two integers , It will compare each bit on same position and the result bit will be set(1) if any of corresponding bits differ
 i.e. one of them should be 1 and other should be zero. The symbol which is used to perform bitwise XOR operation is ^.

7. Bitwise NOT (~)
The Bitwise NOT operation is performed on a single number. It change the current bit to it’s complement , i.e. if current bit is 0 then in result it will be 1
and if current bit is 1 then it will become 0. It is denoted by the symbol ~.

9. Left Shift (<<)
This operator shifts the bits of Integer to left side by specific number (As mentioned) .
 This left shift operation is equivalent to multiplying the integer by 2 power number of positions shifted. The symbol which is used to represent Left Shift Operator is <<.



Right Shift (>>)
This operator shifts the bits of Integer to right side by specific number (As mentioned) . This right shift operation is equivalent to dividing the integer by 2 power number of positions shifted. The symbol which is used to represent Left Shift Operator is >>.

~~~  code: 
  
  //Prafful Kulkarni
//23070123099
//enc b1
//Experiment 3-To study and implement C++ Bitwise Operators


#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"a==b: "<<(a==b)<<endl;
    return 0;
}
~~~

//OUTPUT:![image](https://github.com/user-attachments/assets/f5b5c6f6-aaca-4a15-b23b-6bab86bbc43d)

~~~

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<boolalpha;
    cout<<"a==b: "<<(a==b)<<endl;
    return 0;
}
~~~

OUTPUT:
![image](https://github.com/user-attachments/assets/7eb669f9-0b45-487a-b274-bb4d899014f0)


~~~
#include<iostream>
using namespace std;
int main()
{
    bool a = true;
    bool b = false;
    cout<<boolalpha;
    cout<<"a&&b: "<<(a&&b)<<endl;
    return 0;
}
~~~
OUTPUT:
![image](https://github.com/user-attachments/assets/d31fe099-0bb4-45f4-97a0-e8b1a21a86f4)

~~~

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"a|b: "<<(a|b)<<endl;
    cout<<"a&b: "<<(a&b)<<endl;
    cout<<"a<<b: "<<(a<<b)<<endl;
    cout<<"ab: "<<(a>>b)<<endl;
    cout<<"~b: "<<(~b)<<endl;
    cout<<"a^b: "<<(a^b)<<endl;
    return 0;
}
~~~

OUTPUT:
 ![image](https://github.com/user-attachments/assets/94f2e7b5-d9eb-40eb-84a7-ad4d5c4a1e92)


~~~
#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"a|b: "<<bitset<4>(a|b)<<endl;
    cout<<"a&b: "<<bitset<4>(a&b)<<endl;
    cout<<"a<<b: "<<bitset<4>(a<<b)<<endl;
    cout<<"ab: "<<bitset<4>(a>>b)<<endl;
    cout<<"~b: "<<bitset<4>(~b)<<endl;
    cout<<"a^b: "<<bitset<4>(a^b)<<endl;
    return 0;
}
~~~
OUTPUT:
![image](https://github.com/user-attachments/assets/b05f13b1-fa05-4f91-bb45-55edae920ba1)

    ~~~
#include<iostream>
 using namespace std;
 int main()
 {
     int a;
     cout <<"enter a number";
     cin>>a;
     if(a>=0)
         { cout <<"a is greater than 0";}
     else
     {cout<<"a is smaller than 0";}
     return 0;
}
~~~
// output:
![image](https://github.com/user-attachments/assets/a9450b4d-075f-4261-b927-ef18309286c3)


 
