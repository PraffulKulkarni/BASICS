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

