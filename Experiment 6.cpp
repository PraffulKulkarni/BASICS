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
int main()
{ int i,j;
   int matrixa[3][3]={{1,2,6} , {2,8,4} , {4,5,6} };
   int matrixb[3][3] = {{2,7,1}, {2,1,3}, {1,1,2}};
   int sum[3][3];
   for ( int i =0; i<3; i++)
   {
    for (int j = 0; j<3; j++)
    {
        sum[i][j] = matrixa[i][j] + matrixb[i][j];
    }
   }

   cout << "Sum :"<< endl;
   for (int i = 0; i<3; i++)
   {
    for (int j = 0; j<3; j++)
    {
        cout << sum[i][j] << " ";
    }
    cout << endl;
   }
   return 0;
}
