// Prafful Kulkarni
//23070123099
//entc b1
//Experiment 3-To study and implement Operators in C++

//exp 3.1

//arithmetic operator: 

 #include<iostream>
 using namespace std;
 int main()
{
    int a,b;
    cout<<"enter first number: ";
    cin>>a;
    cout<<"enter second number: ";
    cin>>b;
    cout<<"a==b: "<<(a==b)<<endl;
    return 0;
}

// output:
enter first number: 5
enter second number: 6
a==b: 0


//Relational  oprator:

 #include<iostream>
 using namespace std;
 int main()
{
    int a,b;
    cout<<"enter first number: ";
    cin>>a;
    cout<<"enter second number: ";
    cin>>b;
    cout<<"a!=b: "<<(a!=b)<<endl;
    return 0;
}
// output:
enter first number: 7
enter second number: 9
a!=b: 1

//exp 3.2 logical operator:

 #include<iostream>
 using namespace std;
 int main()
{
    
    
    bool a = true;
    
    bool b = true;
    cout<<boolalpha;
    cout<<"a&&b: "<<(a&&b)<<endl;
    return 0;
}
// output:
a&&b: true

//exp 3.3:

 #include<iostream>
 using namespace std;
 int main()
{ int a,b;
    
    a = 1;
    b = 1;
    cout<<"a&b: "<<(a&b)<<endl;
     cout<<"a|b: "<<(a|b)<<endl;
      cout<<"a^b: "<<(a^b)<<endl;
       cout<<"a: "<<(~a)<<endl;
        cout<<"a<<b: "<<(a<<b)<<endl;
         cout<<"a>>b: "<<(a>>b)<<endl;
    
    return 0;
}
// output:
a&b: 1
a|b: 1
a^b: 0
a: -2
a<<b: 2
a>>b: 0

