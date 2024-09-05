// prafful kulkarni
//23070123099
// experiment 10: call by reference and call by value code

 //CALL BY VALUE
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

//output:
Before swabByValue: a = 4 , b = 8
Inside swabByValue function: a = 8 , b = 4
After swapByValue: a = 4 , b = 8

//CALL BY REFERENCE

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

//output:
Before swabByReference: a = 1 , b = 5
Inside swabByReference function: a = 5 , b = 1
After swapByReference: a = 5 , b = 1
