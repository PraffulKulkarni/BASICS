# AIM:


To learn about VS code and getting input from user and displaying it.

 # Software Used
VS Code

# Problem Statement
1.) Write a program to print simple 'Hello world' message.

2.) Write a program to get the input from user and displaying it.

3.) Write a program to create a basic calculator.

# Theory
To print a message or output we use 'cout' .

The namespace is used to decrease or limit the scope of any variable or function.

'endl' is used to move the cursor to the new line.


~~~code:
#include <iostream>
using namespace std;
int main()
{
string a;

    
    cout<<"Enter your name  ";
    getline(cin,a);
    cout<<"Hello "<<a;
    return 0;
}
~~~

//output:
![image](https://github.com/user-attachments/assets/46940c68-2313-410e-942e-d01a09e264d3)



~~~// ADDITION
#include <iostream>
using namespace std;
int main()
{ int a,b,c;
cout << "enter first number ";
cin >> a;
cout << "enter the second number ";
cin >> b;
c=a+b;
cout << "the sum is "<<c;
return 0;
}
~~~

//Output:
![image](https://github.com/user-attachments/assets/3201d256-2162-49ed-a7e6-38a14d9a8db0)



~~~// DIVISION
#include <iostream>
using namespace std;
int main()
{ float a,b,c;
cout << "enter first number ";
cin >> a;
cout << "enter the second number ";
cin >> b;
c=a/b;
cout << "the QUOTIENT is "<<c;
return 0;
}
~~~

//output:
![image](https://github.com/user-attachments/assets/34b1b2ae-603c-4304-927e-6ed69dcb4a92)


~~~// MULTIPLICATION

#include <iostream>
using namespace std;
int main()
{ float a,b,c;
cout << "enter first number ";
cin >> a;
cout << "enter the second number ";
cin >> b;
c=a*b;
cout << "the RESULT is "<<c;
return 0;
}
~~~

// output:
![image](https://github.com/user-attachments/assets/2169fb8a-8e95-42de-880b-531533796150)

