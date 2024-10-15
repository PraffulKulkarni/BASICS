# Aim:
To study and implement Queue implementation using array.
     menu options - i) Insert ii) Delete iii) Display iv) exit
# Theory:
Queue is a linear data structure in which elements can be inserted only from one side of the list called rear,
and the elements can be deleted only from the other side called the front. The queue data structure follows the FIFO (First In First Out) principle,
i.e. the element inserted at first in the list, is the first element to be removed from the list.
The insertion of an element in a queue is called an enqueue operation and the deletion of an element is called a dequeue operation
. Circular Queue is just a variation of the linear queue in which front and rear-end are connected to each other to optimize the space wastage of the Linear queue and
make it efficient.

# Code:
~~~
#include <iostream>
using namespace std;
#define size 5
#define ERROR -9999
class Queue{
    int rear, front, ar[size];
    public:
    Queue(){
        rear = -1;
        front = -1;
        ar[0]=0;
    }
    void enqueue(int);
    int dequeue();
    void disp();
};
void Queue :: enqueue(int num){
    if (rear == (size+1)){
        cout<<"Queue is full"<<endl;
    }
    else{
        if(front == -1){
            ar[++front]=num;
            rear++;
        }
        else{
            ar[++rear]=num;
        }
    }

    }
int Queue ::dequeue(){
    if(front ==-1 || front ==(rear+1)){
        cout<<"Queue is empty"<<endl;
        return ERROR;
    }
    else{
        int val = ar[front++];
        return val;
    }
}
void Queue :: disp(){
    if(front ==-1 || front ==(rear+1)){
        cout<<"Quee=ue is empty"<<endl;
        return;
    }
    else{
        int i = front ;
        while (i!=(rear+1)){
            cout<<ar[i];
            i++;
        }
    }
}

int main(){
        Queue q1;
        q1.enqueue(4);
        q1.enqueue(8);
        q1.enqueue(3);
        q1.disp();
        int val = q1.dequeue();
        cout<<endl<<"Deleted element: "<<val<<endl;
        q1.disp();

}
~~~
//output:
![image](https://github.com/user-attachments/assets/31908f94-8f20-4439-8b83-d09478031e8c)

# Conclusion:
We learnt about queue,enqueue and dequeue in c++.
