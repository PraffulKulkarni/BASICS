# Aim
To learn about for loop and while loop and to execute programs based on password verification:

# Software Used
online compiler

# Problem Statement
1.) c++ code for printing numbers using for loop.
2.)  code for printing numbers using while loop.
3.) c++code for making a triangular star pattern.
4.) c++ code for making a square shaped star pattern.
5.) c++ code for making a pyramid of star.
6.)  c++ code to get sum of the numbers printed.
7.)  c++ code to make a Floyd triangle.
8.)  c++ code to make Floyd triangle of alphabets.
9.) c++ code for password validation till correct password is entered.

#  Theory
This experiment gives us a basic overvieew of for and while loop .In C++, for loop is an entry-controlled loop that is used to execute a block of code repeatedly for the specified range of values. Basically, for loop allows you to repeat a set of instructions for a specific number of iterations.

While Loop in C++ is used in situations where we do not know the exact number of iterations of the loop beforehand. The loop execution is terminated on the basis of the test condition. Loops in C++ come into use when we need to repeatedly execute a block of statements.

Floyd's triangle is a triangular array of natural numbers used in computer science education. It is named after Robert Floyd. It is defined by filling the rows of the triangle with consecutive numbers, starting with a 1 in the top left.

# codes:

  //Printing numbers for loop:-
~~~//prafful kulkarni
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the end value: ";
    cin >> num ;
    for(int i = 1; i<=num; i++)
    {
        cout<< "  " <<i;
    }
    return 0;
}
~~~
//output:
![image](https://github.com/user-attachments/assets/175969e4-4921-4758-b122-44e555435bb3)


//Printing numbers using while loop.
~~~// prafful kulkarni
#include<iostream>
using namespace std;
int main ()
{ int a,i=1;
    cout << "Enter end value: ";
    cin >> a;
    while( i <= a)
    { 
        cout<< " "<<i;
        i++;
    }
    return 0;

}
~~~
// output:
![image](https://github.com/user-attachments/assets/6b5997f3-f7eb-49fb-85b3-1f314cc6ff2a)

 

//Triangular star pattern:
~~~//prafful kulkarni
#include<iostream>
using namespace std;
int main ()
{
    int row;
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for(int j= 0 ; j<= i; j++)
    {
        cout << "*";
    }
    cout << endl;
    }
    return 0;
}
~~~
//output:
![image](https://github.com/user-attachments/assets/8e67b054-97c9-4f47-b58d-63bf21cb87e6)

 

//Square star pattern.
~~~//prafful kulkarni
#include<iostream>
using namespace std;
int main ()
{ int r;
    cout<< "Enter number of rows: ";
    cin>> r;
    for(int i = 0; i<=r-1; i++)
    { for (int j =0; j<=r-1; j++)
    {
        cout << "*" ;
    }
 cout << endl;
    }
    return 0;
}
~~~
//output:
![image](https://github.com/user-attachments/assets/5ef68d28-1be5-440b-8651-d5fc6c091a4e)

 


//Pyramid  star
~~~//prafful kulkarni
#include<iostream>
using namespace std;
int main ()
{
    int row;
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for ( int k = row-1 ; k>i; k--)
    {
        cout << " ";
    }
        for(int j= 0 ; j<2*i+1; j++)
    {
        cout << "*";
    }
    cout << endl;
    }
    return 0;
}
~~~
//output:
![image](https://github.com/user-attachments/assets/cf6bbd77-890b-4527-9c17-23aeb390b9fa)

 

//Sum of the numbers:
~~~//prafful kulkarni
#include<iostream>
using namespace std;
int main()
{
    int sum = 0, num;
    cout << "Enter last number: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;


    }
    cout << "Sum is: "<<sum;
    return 0;

}
~~~
//oitput;
![image](https://github.com/user-attachments/assets/004c5bb2-d91d-4261-8b62-b6c27ecec2a2)

 

//Floyd triangle:
~~~//prafful kulkarni
#include<iostream>
using namespace std;
int main()
{
    int row, a=1;
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for(int j= 0 ; j<= i; j++)
    { 
        cout << " "<<a;
        a++;
    }

    cout << endl;
    }
    return 0;
}
~~~
//output:
![image](https://github.com/user-attachments/assets/7cdb6fa7-57bd-432b-bc06-694d249c1392)

 

//Floyd triangle of alphabets
~~~// prafful kulkarni
#include<iostream>
using namespace std;
int main()
{
    int row; 
    char a='A';
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for(int j= 0 ; j<= i; j++)
    { 
        cout << " "<<a;
        a++;
    }

    cout << endl;
    }
    return 0;
}
~~~
//output:
![image](https://github.com/user-attachments/assets/ac6b8a6f-a017-42e5-803d-151b27deae96)

 

//Password validation:
~~~//prafful kulkarni
#include<iostream>
#include<string>
using namespace std;
int main ()
{ string pass;
    do
{
 cout << "Enter a password: ";
 cin >> pass;
 if (pass=="SIT")
 {
    cout << "Success !!";
 }
 else
 {
    cout << "Try again"<<endl;
 }
} 
while (pass != "SIT");
return 0;
}
~~~
//output:
![image](https://github.com/user-attachments/assets/df2e32a3-db54-4382-b0c2-0909383bf116)

 
