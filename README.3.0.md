EXPERIMENT 3 To study and implement operators in C++ : -

# DIFFERENT TYPES OF OPERATORS
There are different types of operations used in C++ to perform different actions.
An operator is a symbol that operates on a value to perform specific mathematical or logical computations.
They form the foundation of any programming language. In C++, we have built-in operators to provide the required functionality.
An operator operates the operands. For example, int c = a + b; Here, ‘+’ is the addition operator. ‘a’ and ‘b’ are the operands that are being ‘added’.

# Operators in C++ can be classified into 6 types:
Arithmetic Operators
Relational Operators
Logical Operators
Bitwise Operators
Assignment Operators
Ternary or Conditional Operators
1. Arithmetic Operations: -
Arithmetic Operators in C++ are used to perform arithmetic or mathematical operations on the operands.
For example, ‘+’ is used for addition, ‘–‘ is used for subtraction, ‘*’ is used for multiplication, etc.
 In simple terms, arithmetic operators are used to perform arithmetic operations on variables and data; they follow the same relationship between an operator and an operand.

3. Comparison Operations: -
There are mainly 6 Comparison Operators namely:

Greater than (>) : this operator checks whether 1 variable is greater than other variable
Greater than or equal to (>=) : this operator checks whether operand1 is greater than or equal to operand2. If the result turns out to be true, it returns true, or else returns false. example 5>=5 ->returns true
Less than (<) : this operator checks whether operand1 is lesser than operand2. If the result turns out to be true, it returns true, or else returns false. example 3<5 ->returns true
Less than or equal to (< =) : this operator checks whether operand1 is lesser than or equal to operand2. If the result turns out to be true, it returns true or else returns false. example 5<=5 ->returns true
Equal to (==) : this operator checks whether operand1 is equal to operand2. If the result turns out to be true, it returns true or else returns false. example 5==5 ->returns true
Not Equal to (! =) : this operator checks whether operand1 is not equal to operand2. If the result turns out to be true, it returns true or else returns false. example 5!=3 ->returns true
Comparison Operators have only two return values, either true (1) or False (0).

3. Assignment Operators
Assignment operators are used to assign values to variables. For Example: - Int x = 10;

Here we have assigned the variable x to the integer value 10.

In C++, the assignment operator forms the backbone of many algorithms and computational processes by performing a simple operation like assigning a value to a variable.
It is denoted by equal sign ( = ) and provides one of the most basic operations in any programming language that is used to assign some value to the variables in C++ or in other words,
it is used to store some kind of information.

code:
// Prafful Kulkarni
//23070123099
//entc b1
//Experiment 3-To study and implement Operators in C++

//exp 3.1

~~~//arithmetic operator: 

 #include<iostream>
 using namespace std;
 int main()
{
    int a,b;
    cout<<"enter first number: ";
    cin>>a;
    cout<<"enter second number: ";
    cin>>b;
    cout<<"a==b: "<<(a==b)<<endl;
    return 0;
}~~~

// output:
![image](https://github.com/user-attachments/assets/11664792-f777-4330-9acc-af4939abc4f5)



//Relational  oprator:

~~~ #include<iostream>
 using namespace std;
 int main()
{
    int a,b;
    cout<<"enter first number: ";
    cin>>a;
    cout<<"enter second number: ";
    cin>>b;
    cout<<"a!=b: "<<(a!=b)<<endl;
    return 0;
}~~~
// output:
![image](https://github.com/user-attachments/assets/423c4229-e251-40f1-812e-334588f14892)


//exp 3.2 logical operator:

~~~ #include<iostream>
 using namespace std;
 int main()
{
    
    
    bool a = true;
    
    bool b = true;
    cout<<boolalpha;
    cout<<"a&&b: "<<(a&&b)<<endl;
    return 0;
}~~~
// output:
![image](https://github.com/user-attachments/assets/5bc57743-1ac3-40e6-8812-ecc71cc5aa23)


//exp 3.3:

~~~ #include<iostream>
 using namespace std;
 int main()
{ int a,b;
    
    a = 1;
    b = 1;
    cout<<"a&b: "<<(a&b)<<endl;
     cout<<"a|b: "<<(a|b)<<endl;
      cout<<"a^b: "<<(a^b)<<endl;
       cout<<"a: "<<(~a)<<endl;
        cout<<"a<<b: "<<(a<<b)<<endl;
         cout<<"a>>b: "<<(a>>b)<<endl;
    
    return 0;
}~~~
// output:
![image](https://github.com/user-attachments/assets/f7396f8d-ab2c-4109-bed9-8980efb66117)

# conclusion: we learnt about different operators used in a code
