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


//7.3:
 #include <iostream>
using namespace std;
int main() {
    int n, b,c=0; 
    cout<<"Enternumber of elements you want in array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];}
        cout<<"Enter an element to be searched: ";
        cin>>b;
        for(int i=0;i<n;i++){
            if(a[i]==b){
                cout<<i<<" "<<endl;
                c++;
                
            }
             
        if(a[i]!=b)
        {
            cout<<"error";
        }
        
            
        }cout<<"The entered number is printed"<<c<<"times";
         
         
        }

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
        cout<<sum<<endl;
        cout<<avg;
         
}

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
