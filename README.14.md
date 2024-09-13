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

 ~~~//Multilevel Inheritance:
 #include<iostream>
  
 using namespace std;
 class Cheetah{
     public:
     void run(){
         cout<<"Cheetah is running"<<endl;
         
     }
 };
 class cat: public
 Cheetah{
     public:
     void meow(){
         cout<<"Cat is meowing"<<endl;
     }
 };
 class Kohli:public
 cat{
     public:
     void goat(){
         cout<<"Kohli is goat"<<endl;
         
     }
 };
 int main(){
    Kohli d;
     d.run();
     
     d.goat();
          d.meow();
 }
~~~

 //output:
 ![image](https://github.com/user-attachments/assets/cc0597c4-08f2-4ce9-96b0-d7233a21b048)


 ~~~//Hierarchial Inheritance:
  #include<iostream>
 using namespace std;
 class Colour{
     public:
     void red(){
         cout<<"Colour is red"<<endl;
         
     }
 };
 class selfchoice:public Colour{
     public:
     void white(){
         cout<<"Colour is white"<<endl;
         
     }
 };
 class userschoice:public Colour{
     public:
     void black(){
         cout<<"Colour is black"<<endl;
         
     }
 };
 int main(){
     selfchoice d;
     userschoice c;
     d.red();
     d.white();
     c.red();
     c.black();
     return 0;
 }
~~~
//output:
![image](https://github.com/user-attachments/assets/f6fab798-e059-40ff-87a1-984054a30da0)


