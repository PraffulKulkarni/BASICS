// exception handling:
 #include<iostream>
 using namespace std;
  int main(){
     float n;
      cout<<"enter a positive number: ";
      cin>>n;
       
      try{
          if(n<0){
              throw n;
          }
          cout<<" enter a positive number; "; 
          
      }
      catch(const float n){
          cout<<"you entered "<<n<<" which is a negative number"<< endl;
      }
          
}
//output:
![image](https://github.com/user-attachments/assets/b6dd83a4-ae8f-4bac-b58e-c25fd54a5f0b)

