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
   cout<<"Inside swapbyValue function: "<<"a = "<<a<<" , "<<"b = "<<b<<endl;
}
int main()
 
{ int a=4,b=8;
cout<<"Before swapbyValue: "<<"a = "<<a<<" , "<<"b = "<<b<<endl;
swap(a,b);
cout<<"After swapbyValue: "<<"a = "<<a<<" , "<<"b = "<<b<<endl;
}
~~~

//output:
 ![image](https://github.com/user-attachments/assets/0bc4f980-3dd4-4b32-94a1-eb7a519462d8)


~~~//CALL BY REFERENCE

 #include <iostream>
using namespace std;
 void swap(int *a,int* b)
 
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
  cout<<"Inside swapByReference function: "<<"a = "<< *a<<" , "<<"b = "<< *b<<endl;
    
}
 int main()
 
{ int a=1,b=5;
cout<<"Before swapByReference: "<<"a = "<<a<<" , "<<"b = "<<b<<endl;
swap(&a,&b); 
cout<<"After swapByReference: "<<"a = "<<a<<" , "<<"b = "<<b<<endl;
}
~~~
//output:
 ![image](https://github.com/user-attachments/assets/a56e00ee-ba4c-4efa-ab63-9b4e4d368be3)
 


# Conclusion
we learnt to define class using call by reference and call by value.

