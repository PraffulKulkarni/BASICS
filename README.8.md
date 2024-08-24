# Aim:
to perform operations based on matrices.
# software used 
online compiler
# Theory:
A matrix is ​​a two-dimensional array with rows and columns as elements. The most commonly used matrix operations are addition, subtraction, and multiplication.
Matrix multiplication multiplies the row elements of the first matrix with all the column elements of the second matrix.
A sparse matrix is ​​a matrix whose elements are mostly zero. The following section contains various C++ programs on matrix operations, matrix types, matrix diagonals, sparse matrix
, adjacency matrix, and triangular matrix.
# codes:
~~~#include<iostream>
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
~~~

//output:
 ![image](https://github.com/user-attachments/assets/7b18884f-6105-4ff6-9f8a-c657e43fcc51)


~~~  //addition of matrices:

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
~~~

//output:
 ![image](https://github.com/user-attachments/assets/57f948e2-3e28-4848-82bf-4711632af411)


~~~// multiplication of arrays:
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
~~~
//output:
 ![image](https://github.com/user-attachments/assets/ac2e3c49-d4f3-4d7d-8662-19f9c51c0000)


~~~//to print sum of diagonal elements:
        #include<iostream>
using namespace std;
int main()
{
     int i,j,row,col,sum1=0,sum2=0;
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
     
    
 
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                 sum1+=arr1[i][j];
                
              
        }if(i+j==row-1)
        {
           sum2+=arr1[i][j];
        }  
        
        
    }
    }
     cout<<sum1<<endl;
            
             cout<<sum2;
        
}
~~~

//output:
 ![image](https://github.com/user-attachments/assets/bd3b2b62-ecb3-479a-b095-fb61ccfed9fc)


   ~~~  // to transpose a matrix;
      #include<iostream>
using namespace std;
int main()
{
     int i,j,row,col;
   cout<<"enter row and column: ";
   cin>>row>>col;
   
   int arr[row][col],arr2[col][row];
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
             arr2[i][j]=arr[j][i]; 
        }
    
    }
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
              cout<<arr2[i][j]; 
        }
    cout<<endl;
    }
    
    
    
}
~~~
//output:
 ![image](https://github.com/user-attachments/assets/3a1aa2d3-6ab2-4266-8322-ddf58d877e27)


# conclusion:
we learnt how to perform matrix operations and also to transform a matrix.







