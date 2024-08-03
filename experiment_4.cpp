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

OUTPUT:
Enter first number: 123
Enter second number: 123
a==b: 1


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

OUTPUT:
Enter first number: 22
Enter second number: 
22
a==b: false


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

OUTPUT:
a&&b: false


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

OUTPUT:
Enter first number: 3
Enter second number: 2
a|b: 3
a&b: 2
a<<b: 12
ab: 0
~b: -3
a^b: 1


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

OUTPUT:
Enter first number: 5
Enter second number: 7
a|b: 0111
a&b: 0101
a<<b: 0000

    
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
// output:
enter a number3
a is greater than 0
