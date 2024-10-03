 ~~~// program to check nodal:
 #include<iostream>
 using namespace std;
 class Link{
     public:
     int data;
     Link* next;
     Link(int num){
         data=num;
         next=NULL;
     
     }
     
 };
 int main(){
     Link* l1=new Link(6);
     cout<<l1->data<<"  "<<l1->next;
     
 }
~~~
//outut:
![image](https://github.com/user-attachments/assets/be363950-4122-4b25-8ed7-115eb590ebb4)

//program to add nodal:
 #include<iostream>
 using namespace std;
 class Link{
     public:
     int data;
     Link* next;
     Link(int num){
         data=num;
         next=NULL;
         
     }
 };
 void insert_head(Link* &head,int data){
     Link* new_node=new Link(data);
     new_node->next=head;
     head=new_node;
     
 }
 void disp(Link* head){
     Link* temp=head;
     while(temp!=NULL){
         cout<<temp->data<<"->";
         temp=temp->next;
     }
     cout<<"NULL"<<endl;
     
 }
 int main(){
     Link* head=NULL;
     insert_head(head,30);
     disp(head);
     insert_head(head,32);
     disp(head);
     insert_head(head,35);
     disp(head);
 }

 //output:
 ![image](https://github.com/user-attachments/assets/56b620f3-2b82-43ca-a922-3cc55c0055d0)

