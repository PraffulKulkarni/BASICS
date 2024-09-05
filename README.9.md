# AIM
To use pointers and access elements of array and find address of different data types.

# Software Used
Online Compiler

# Problem Statement
1.) Write a c++ program to initialize pointers of different data types and print the required values.

2.) Write a c++ program to access elements of array using pointer.

3.) Write a c++ program to access elements of array without using pointer variable.

# Theory:
Pointers are used extensively in both C and C++ for three main purposes:
to allocate new objects on the heap, to pass functions to other functions.,
to iterate over elements in arrays or other data structure.
 # Code:
~~~ // CODE TO PRINT POINTERS VALUE:(int)

 #include <iostream>
using namespace std;
int main()
{
    int a = 6;
    int *ptr;
    ptr=&a;
   cout<< "The value pointed by *ptr is: "<<*ptr << endl;
    cout << "The value in b is: " <<a << endl;
    cout << "The value in pointer variable ptr is: "<<(void*)ptr << endl;

    cout << "the address of variable b is: "<<&a << endl;
    ptr ++;
    cout<< "After increment the value in pointer variable ptr is: " << (void*)ptr << endl;
}
~~~
 //output:
 ![image](https://github.com/user-attachments/assets/c6f3b8fc-0acc-49a8-9192-20f9c3849585)


~~~// code to print and increment charcters:
 #include<iostream>
using namespace std;
int main()
{
    char a = 'c'; 
    

    char *ptr;

    ptr = &a;

    cout<< "The value pointed by *ptr is"<<*ptr << endl;
    cout << "The value in b is" <<a << endl;
    cout << "The value in pointer variable ptr is"<<(void*)ptr << endl;

    cout << "the address of variable b is "<<&a << endl;
    ptr ++;
    cout<< "After increment the value in pointer variable ptr is: " << (void*)ptr << endl;

    
}
~~~
//output:
![image](https://github.com/user-attachments/assets/09987634-83c4-4783-a417-a1208371a246)

 

~~~// code to print and increment float values:
  #include <iostream>
using namespace std;
int main()
{
    float a = 'A';
    float *ptr;
    ptr=&a;
     cout<< "The value pointed by *ptr is: "<<*ptr << endl;
    cout << "The value in b is: " <<a << endl;
    cout << "The value in pointer variable ptr is: "<<(void*)ptr << endl;

    cout << "the address of variable b is: "<<&a << endl;
    ptr ++;
    cout<< "After increment the value in pointer variable ptr is: " << (void*)ptr << endl;
}
~~~

//output:
![image](https://github.com/user-attachments/assets/d0af46ca-ba5d-4fc6-993f-c849612e3b5e)

  
~~~// access array using pointer:
 #include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int a[5] = { 1,2,4,8,9};
    ptr = &a[0];
    int i;
    for(i=0 ; i<5 ; i++)
    {
        cout << "Element "<< i+1 <<" "<<"="<<" "<<*ptr << endl;
        ptr ++;

    }
}
~~~
//output:
![image](https://github.com/user-attachments/assets/3a7ea3fd-0c83-45a7-81be-1c3e32d75a59)

 
 



~~~//same without using pointer variable:
   #include<iostream>
using namespace std;
int main()
{
    int i, *ptr;
    int a[50]={1,2,3,4,5};
    ptr=&a[0];
    for(i=0;i<5;i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }
}
~~~
 //output:
 ![image](https://github.com/user-attachments/assets/35a9bed3-ed22-4c4c-9d9c-4c64546a2926)


 # Conclusion:
 We learnt about the pointer variables in this experiment.
