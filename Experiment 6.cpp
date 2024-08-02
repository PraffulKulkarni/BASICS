// Prafful Kulkarni
//23070123099
//experiment 6

//exp 6.1 for loop:
#include<iostream>
using namespace std;
int main() {
    int i;
    for(i=0;i<10;i++){
        cout<<"Hello world("<<i+1<<")"<<endl;
    }
}


// for loop to print sum:
#include<iostream>
using namespace std;
int main(){
    int sum=0, i, num;
    cout<<"enter the numbers for sum: ";
    
    cin>> num;
    for(i=1;i<=num;i++)
    {
         
        sum=sum+i;
          
    }
    cout<<"sum of first "<<num<<"natural numbers is "<<sum;
}


//exp6.2 for  loop:
 #include<iostream>
using namespace std;
int main(){
    int num, i;
    cout<<"enter the end value";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        cout<<i;
        
    }
}

// exp 6.3 nested for loop:

 #include<iostream>
using namespace std;
int main(){
    int i, j;
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=4;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

//printing inverted stars pattern:

#include<iostream>
using namespace std;
int main(){
    int i, j,rows=4;
    for(i=0;i<=rows;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}

// printing star pattern:
#include<iostream>
using namespace std;
int main() 
{
    int i, j, k, rows=8;
    for(i=0;i<rows;i++)
    {
        for(j=rows-1;j>i;j--)
        {
            cout<<" ";
        }
        for(k=0;k<2*i+1;k++)
        {
            cout<<"*";
        }  cout<<endl;
    }
    
}

//printing numberas to n:
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
