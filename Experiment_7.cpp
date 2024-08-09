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
