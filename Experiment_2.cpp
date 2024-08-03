// Prafful Kulkarni
//23070123099
// entc b1
//experiment 2-To study and implement C++ Program Structure (Data Types)

//exp2.1:-

#include <iostream>
using namespace std;
int main()
{ 
 
cout<<"size of integer is "<<sizeof(int)<< " bytes"<<endl;
cout<<"size of character is "<<sizeof(char)<< " bytes"<<endl;
cout<<"size of float is "<<sizeof(float)<< " bytes"<<endl;
cout<<"size of string is "<<sizeof(string)<< "  bytes"<<endl;

}
// output:
size of integer is 4 bytes
size of character is 1 bytes
size of float is 4 bytes
size of string is 32  bytes

//exp2.2:-

#include<iostream>
Using namespace std;
void staticExample(){
int z = 0;
z++;
cout<<"the value of z is: "<<z<<endl;
}
int main(){
staticExample();
staticExample();
return 0;
}
//output:
0
