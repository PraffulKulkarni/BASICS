// prafful kulkarni
//23070123099
//experiment_8 to diasplay matrix:
//code
#include<iostream>
using namespace std;
int main()
{
     int i,j,row,col;
   cout<<"enter row and column: ";
   cin>>row>>col;
   
   int arr[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<"Enter element("<<i<<","<<j<<")";
            cin>>arr[i][j];
             
        }
        
    }
      
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<arr[i][j];
        }
    cout<<endl;
    }
    
    
}

//output:
enter row and column: 2 2
Enter element(0,0)1
Enter element(0,1)2
Enter element(1,0)3
Enter element(1,1)4
12
34

  //addition of matrices:
  
