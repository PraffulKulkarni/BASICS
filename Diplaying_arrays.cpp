// Prafful Kulkarni 
// 23070123099
//b1

//7.1 Create and display array using for loop
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
}

//output:
Enter the number of elements you want to enter : 4
Enter element no 1 1
Enter element no 2 2
Enter element no 3 4
Enter element no 4 5
The elements of the array are: 1245

//7.2 Print the array in a reversed order
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

//output:
Enter the number of elements you want to enter : 3
Enter element no 1 2
Enter element no 2 3
Enter element no 3 4
The reversed elements of the array are:  4 3 2


// to print sum and avg of arrays:
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
//output:
Enternumber of elements you want in array: 4
Enter elements of array: 3
4
5
6
sum is: 18
avg is: 4.5

//print max and min of arrays entered:
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
//output:
Enternumber of elements you want in array: 3
Enter elements of array: 2
6
7
max is: 7
min is: 2


// concatenation of array:
#include<iostream>
using namespace std;
int main() 
{
    string name("Prafful");
    string surname("kulkarni");
    name.append(surname);
    cout<<name<<endl;
}

//output:
Praffulkulkarni

//palindrome program:
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

// output:
Enter a word to check: mom
 It is a palindrome


// reverse string:
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

// output:
reverse string is:sisoibmys

//to search element:
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
//output:
Enter the number of elements: 4
Enter array elements: 2
3
4
5
Enter an element to be searched in an array: 3
The element 3 is present at location: 1
The element 3 occurs 1 times.

   // print array:
    #include <iostream>
using namespace std;
int main()
{
    char s[]= "home";
    cout<<s<<endl;
    return 0;
}
//output:
home

// element search and its location:
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

//output:
enter the number of elements:3
Enter array elements:1
2
3
Enter an element to be searched in a array:2
The element is present at location:1
The element 2 occurs 1 times
