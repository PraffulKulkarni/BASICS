# AIM
To learn pointer operations in c++.

# Software Used
online compiler

Problem Statement
1.) Write a c++ program to swap the numbers using call by value.

2.) Write a c++ program to swap the numbers using call by reference.

# Theory:
While calling a function, we pass values of variables to it. Such functions are known as “Call By Values”. 
While calling a function, instead of passing the values of variables,
we pass address of variables(location of variables) to the function known as “Call By References.

# Codes:
~~~ //CALL BY VALUE
 #include <iostream>
using namespace std;
 void swap(int a,int b)
 
{
    int c;
    c=a;
    a=b;
    b=c;
   cout<<"Inside swabByValue function: "<<"a = "<<a<<" , "<<"b = "<<b<<endl;
}
int main()
 
{ int a=4,b=8;
cout<<"Before swabByValue: "<<"a = "<<a<<" , "<<"b = "<<b<<endl;
swap(a,b);
cout<<"After swapByValue: "<<"a = "<<a<<" , "<<"b = "<<b<<endl;
}
~~~

//output:
 ![image](https://github.com/user-attachments/assets/f472d5da-df92-419b-83f5-c74abe76a6ba)

~~~//CALL BY REFERENCE

 #include <iostream>
using namespace std;
 void swap(int *a,int* b)
 
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
  cout<<"Inside swabByReference function: "<<"a = "<< *a<<" , "<<"b = "<< *b<<endl;
    
}
 int main()
 
{ int a=1,b=5;
cout<<"Before swabByReference: "<<"a = "<<a<<" , "<<"b = "<<b<<endl;
swap(&a,&b); 
cout<<"After swapByReference: "<<"a = "<<a<<" , "<<"b = "<<b<<endl;
}
~~~
//output:
![image](https://github.com/user-attachments/assets/dcc8bedf-5bcb-4bcb-934d-7d4f17c6be7e)

# Conclusion
we learnt to define class using call by reference and call by value.

