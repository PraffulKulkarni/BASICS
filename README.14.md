exp 14:
# codes:
~~~//Inheritance
 #include<iostream>
 using namespace std;
 class Student{
     public:
     void study(){
         cout<<"Student is studying"<<endl;
     }
     };
     class Name:public
    Student{
         public:
         void Prafful(){
             cout<<"Name  is Prafful"<<endl;
         }
     };
     int main(){
         Name d;
         d.study();
         d.Prafful();
         return 0;
     
 }
 ~~~
 //output:
 ![image](https://github.com/user-attachments/assets/e68d790d-3ba2-4d06-a361-03b6bebfefca)
