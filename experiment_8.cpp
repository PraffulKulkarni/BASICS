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

     #include<iostream>
using namespace std;
int main()
{
     int i,j,row,col;
   cout<<"enter row and column: ";
   cin>>row>>col;
   
   int arr1[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<"Enter element("<<i<<","<<j<<")";
            cin>>arr1[i][j];
             
        }
        
    }
    cout<<"enter row and column: ";
   cin>>row>>col;
    int arr2[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<"Enter element("<<i<<","<<j<<")";
            cin>>arr2[i][j];
             
        }
        
    }
    
    int sum[row][col];
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
          sum[i][j]=arr1[i][j]+arr2[i][j];
             
        }
        
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<sum[i][j];
             
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
enter row and column: 2 2
Enter element(0,0)2
Enter element(0,1)3
Enter element(1,0)4
Enter element(1,1)5
35
79

// multiplication of arrays:
     #include <iostream>  
using namespace std;  
int main()  
{  
int r,c,i,j,k,r1,c1;    
cout<<"enter the number of row=";    
cin>>r;    
cout<<"enter the number of column=";    
cin>>c;    
int a[r][c];
   
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{  
    cout<<"Enter element of first matrix("<<i<<","<<j<<")"; 
cin>>a[i][j];  
}    
}   
cout<<"enter the number of row=";    
cin>>r1;    
cout<<"enter the number of column=";    
cin>>c1;  
int b[r1][c1], mul[r][c1];
   
for(i=0;i<r1;i++)    
{    
for(j=0;j<c1;j++)    
{  
    cout<<"Enter element ofsecond matrix("<<i<<","<<j<<")";
cin>>b[i][j];    
}    
}  
if(r1==c)
{
cout<<"multiplication of the matrix=\n";    
for(i=0;i<r;i++)    
{    
for(j=0;j<c1;j++)    
{    
mul[i][j]=0;    
for(k=0;k<c;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}    
     
for(i=0;i<r;i++)    
{    
for(j=0;j<c1;j++)    
{    
cout<<mul[i][j]<<" ";    
}    
cout<<"\n";    
}   
}
else
{
    cout<<"error";
}
return 0;  
}    
//output:
enter the number of row=2
enter the number of column=3
Enter element of first matrix(0,0)12
Enter element of first matrix(0,1)33
Enter element of first matrix(0,2)4
Enter element of first matrix(1,0)5
Enter element of first matrix(1,1)6
Enter element of first matrix(1,2)4
enter the number of row=3
enter the number of column=2
Enter element ofsecond matrix(0,0)1
Enter element ofsecond matrix(0,1)2
Enter element ofsecond matrix(1,0)4
Enter element ofsecond matrix(1,1)6
Enter element ofsecond matrix(2,0)7
Enter element ofsecond matrix(2,1)6
multiplication of the matrix=
161 224 
57 70 

