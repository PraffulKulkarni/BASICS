~~~// Recursion:
  #include<iostream>
  using namespace std;
   
      int factorial( int n)
      
      {  
          if(n==0){
              return 1;
          }
          else{
              return n*factorial(n-1);
          }
      }
  int main(){ int n;
      cout<<"Enter the number to find factorial: "<<endl;
      cin>>n;
       
      cout<<"Factorial of "<<n<<" is "<<factorial(n)<<endl;
      
      
  }
~~~
//output:
![image](https://github.com/user-attachments/assets/ec168af1-eafa-4eaf-bae4-8b68545a7ce3)

//fibonacci using recursion:
 #include<iostream>
 using namespace std;
  
 int fib(int n){
     if(n==0)
     {
         return 0;
         
     }
     if(n==1)
     {
         return 1;
         
     }
     else
     {
         return fib(n-1)+fib(n-2);
         
     }
     
 }
  int main(){ int n;
    cout<<"enter the numbers for fibonacci"<<endl;
    cin>>n;
    cout<<"fibonacci number is: "<<fib(n);
 }

 //output:![image](https://github.com/user-attachments/assets/4424ea7c-f922-40dd-91a6-045c3d98a877)

 //print sum of n natural numbers;
  #include<iostream>
 using namespace std;
  
 int nat(int n){
     if(n==1)
     {
         return 1;
         
     }
     
     else
     {
         return n+nat(n-1);
         
     }
     
 }
  int main(){ int n;
    cout<<"enter the numbers for printing sum"<<endl;
    cin>>n;
    cout<<"sum is: "<<nat(n);
 }

 //OUTPUT:
 ![image](https://github.com/user-attachments/assets/5afdffdd-bbe9-44c9-b4c6-390d3f73b5f0)

 ## conclusion:
 we learnt about recursion




