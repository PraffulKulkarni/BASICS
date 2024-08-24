# Aim:
to create and display array and perform various operations based on arrays
#   Software  used:
online compiler
# Theory:
An array in C++ programming language is a powerful data structure that allows users to store and manipulate a collection of elements, all of the same data typein a single variable.
Simply, it is a collection of elements of the same data type.
Arrays are the derived data type in C++ that can store values of both - fundamental data types like int, and char; and derived data types like pointers, and structure. 
The values get stored at contagious memory locations that can be accessed with their index number.
# codes:
~~~//7.1 Create and display array using for loop
#include<iostream>
using namespace std;
int main()
{
    int s,i,j;
    cout<<"Enter the number of elements you want to enter : ";
    cin>>s;
    int a[s];
    for(i=0;i<=s-1;i++)
    {
        cout<<"Enter element no "<<i+1<<" ";
        cin>>a[i];
    }
    cout<<"The elements of the array are: ";
    for(j=0;j<=s-1;j++)
    {
    cout<<a[j];
    }
    return 0;
}

~~~
// output:
![image](https://github.com/user-attachments/assets/eaf81721-c9b1-45d7-a527-d07f7de9c401)

 

~~~//7.2 Print the array in a reversed order
#include<iostream>
using namespace std;
int main()
{
    int s,i,j;
    cout<<"Enter the number of elements you want to enter : ";
    cin>>s;
    int a[s];
    for(i=0;i<=s-1;i++)
    {
        cout<<"Enter element no "<<i+1<<" ";
        cin>>a[i];
    }
    cout<<"The reversed elements of the array are: ";
    for(j=s-1;j>=0;j--)
    {
    cout<<" "<<a[j];
    }
    return 0;
}
~~~
//output:
![image](https://github.com/user-attachments/assets/bfeac4b5-3bc5-430a-8944-a54b088b2c8a)



~~~// to print sum and avg of arrays:
   #include <iostream>
using namespace std;
int main() {
    int n, b ;
    float avg=0,sum=0 ;
    cout<<"Enternumber of elements you want in array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
      for(int i=0;i<n;i++){
           
        sum=a[i]+sum;
        avg=sum/n;
      }
        cout<<"sum is: "<<sum<<endl;
        cout<<"avg is: "<<avg;
         
}
~~~
//output:
 ![image](https://github.com/user-attachments/assets/7a0462f9-345b-4172-a1f3-bcef08284dca)


~~~//print max and min of arrays entered:
#include <iostream>
using namespace std;
int main() {
    int n, b;
    cout<<"Enternumber of elements you want in array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
   int max=a[0],min=a[0];
    for(int i=1;i<n;i++){
    if(max<a[i]){
        max=a[i];
        
        
    }
    if(min>a[i]){
    min=a[i];
 
    
    }
}
 cout<<"max is: "<<max<<endl;
 cout<<"min is: "<<min;
}
~~~
//output:
 ![image](https://github.com/user-attachments/assets/db3cbba1-2ea7-425f-b450-a5caeefd5ce4)



~~~// concatenation of array:
#include<iostream>
using namespace std;
int main() 
{
    string name("Prafful");
    string surname("kulkarni");
    name.append(surname);
    cout<<name<<endl;
}
~~~

//output:
![image](https://github.com/user-attachments/assets/5d000ab1-8340-493f-adf4-15d5893da763)


~~~//palindrome program:
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() 
{
    string s1, s2;
    cout << "Enter a word to check: ";
    cin>>s1;
    s2=s1;
    reverse(s1.begin(), s1.end());
    if (s2==s1) 
    {
        cout<<"It is a palindrome";
    }
    else cout<<"It is not a palindrome";
}
~~~
// output:
 ![image](https://github.com/user-attachments/assets/7e8b481d-9e62-4f08-8210-0b5a1abf659e)



~~~// reverse string:
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string a= "symbiosis";
    reverse(a.begin(), a.end());
    cout<<"reverse string is:"<<a<<endl;
    return 0;
    }
~~~

// output:
 ![image](https://github.com/user-attachments/assets/d21c4abe-f698-4555-b55e-0a572f826299)


~~~//to search element:
    #include<iostream>
using namespace std;
int main()
{
     int n, i, j, s, c = 0, flag = 0;
cout << "Enter the number of elements: ";
cin >> n;
int a[n];
cout << "Enter array elements: ";
for( i = 0; i<n ; i++)
{
    cin >> a[i];
}
cout << "Enter an element to be searched in an array: ";
    cin >> s;
for (j= 0 ; j<n; j++)
{
    if ( a[j]==s)
    {
cout<< "The element"<<" "<< s<< " " << "is present at location: "<<j<<endl;
c++;
flag =1;
    }
}

if( flag ==0)
{
    cout<< "The element"<< " "<< s << " "<< "is not present in the given array";
}
else
{
    cout << "The element" << " "<< s << " "<< "occurs"<< " "<< c << " "<< "times.";
}
return 0;
}
~~~
//output:
 ![image](https://github.com/user-attachments/assets/6d4aa839-5d22-4d08-8ad5-2b35c1ddbdb4)


~~~   // print array:
    #include <iostream>
using namespace std;
int main()
{
    char s[]= "home";
    cout<<s<<endl;
    return 0;
}
~~~
//output:
![image](https://github.com/user-attachments/assets/0003fb61-ec1b-4adb-b317-7210d6647a9b)

# Conclusion:
we learnt to create an array and to execute different programs based on arrays.
