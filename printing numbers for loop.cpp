// Prafful Kulkarni
//23070123099
//experiment 6

  //Printing numbers for loop:-
//prafful kulkarni
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
//output:
Enter the end value: 3
  1  2  3

//Printing numbers using while loop.
// prafful kulkarni
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
// output:
Enter end value: 5
 1 2 3 4 5

//Triangular star pattern:
//prafful kulkarni
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
//output:
Enter number of rows: 5
*
**
***
****
*****

//Square star pattern.
//prafful kulkarni
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
//output:
Enter number of rows: 6
******
******
******
******
******
******


//Pyramid  star
//prafful kulkarni
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
//output:
Enter number of rows: 5
    *
   ***
  *****
 *******
*********

//Sum of the numbers:
//prafful kulkarni
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
//oitput;
Enter last number: 4
Sum is: 10

//Floyd triangle:
//prafful kulkarni
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
//output:
Enter number of rows: 8
 1
 2 3
 4 5 6
 7 8 9 10
 11 12 13 14 15
 16 17 18 19 20 21
 22 23 24 25 26 27 28
 29 30 31 32 33 34 35 36


//Floyd triangle of alphabets
// prafful kulkarni
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
//output:
Enter number of rows: 5
 A
 B C
 D E F
 G H I J
 K L M N O

//Password validation:
//prafful kulkarni
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
//output:
Enter a password: praffulsymbi
Try again
