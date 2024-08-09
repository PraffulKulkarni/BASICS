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
// output:
Hello world(1)
Hello world(2)
Hello world(3)
Hello world(4)
Hello world(5)
Hello world(6)
Hello world(7)
Hello world(8)
Hello world(9)
Hello world(10)


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
// output:
enter the numbers for sum: 4
sum of first 4natural numbers is 10

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
// output:
enter the end value7
1234567

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
// output:
 
*****
*****
*****
*****

    
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
// output:
 * 
 *  * 
 *  *  * 
 *  *  *  * 
 *  *  *  *  * 

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
// putput:
       *
      ***
     *****
    *******
   *********
  ***********
 *************
***************

           
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
// output:
Enter end value: 6
 1 2 3 4 5 6


    //Exp 6.4 Floyd series in C++
#include<iostream>
using namespace std;
int main()
{
    int i,j,row,n=1;
    std::cout<<"Enter the number of rows : ";
    std::cin>>row;
    for(i=0;i<row;i++)
    {
        for(j=0;j<i+1;j++)
        {
            cout<<n<<" ";
            n=n+1;
        }
        cout<<endl;
    }
    return 0;
}

//output
Enter the number of rows : 5
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
