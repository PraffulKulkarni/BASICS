//Prafful Kulkarni
//23070123099
//enc b1
//Experiment 4-To study and implement C++ Bitwise Operators


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


//Bit Position
//prafful kulkarni
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int num, set, reset;
    
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the bit position to set (0 to 7): ";
    cin >> set;
    cout << "Enter the bit position to reset (0 to 7): ";
    cin >> reset;
    cout<<num<<" in binary is "<<bitset<8>(num)<<endl;
   
    int num_set = num | (1 << set);
    cout << "Result after setting bit number " <<set<< " is " << bitset<8>(num_set) << endl;
    
    int num_reset = num_set & ~(1 << reset);
    cout << "Result after resetting bit number " <<reset<< " is " << bitset<8>(num_reset) << endl;
    return 0;
}
// output:
Enter a number: 4
Enter the bit position to set (0 to 7): 2
Enter the bit position to reset (0 to 7): 3
4 in binary is 00000100
Result after setting bit number 2 is 00000100
Result after resetting bit number 3 is 00000100
