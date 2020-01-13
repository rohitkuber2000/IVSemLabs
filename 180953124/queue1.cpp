#include<iostream>
using namespace std;

const int size = 10;

class queue{
int item;
int a[10];
int front,rear;
public:
queue(){
front=rear=-1;
}
void push(int i);
int dequeue();
void display();
};

void queue::push(int i){

if(rear == size-1){
cout<<"Queue is full";
}
else{
rear++;
a[rear] = i;
}
}

int queue::dequeue(){

if(rear==front){
cout<<"Queue is empty";
}
else{
front++;
int r = a[front];
return r;
}
}

void queue:: display(){
if(rear==front){
cout<<"Queue is empty";}

else{
for(int i=rear;i!=front;i--){
cout<<a[i];
}
}
}

int main(){
queue q;
int n;
cout<<"Enter the Elements";
do{
cout<<"\nPress 1. To Insert in queue \n Press 2. To pop in queue \n Press 3. To Display queue contents\n Press 4. To Exit";
cin>>n;

switch(n){

case 1:
int ele;
cout<<"Enter the element:";
cin>>ele;
q.push(ele);
break;

case 2:
int p;
p = q.dequeue();
cout<<"The popped element is:"<<p<<endl;
break;

case 3:
cout<<"The queue contents are:";
q.display();
break;
case 4:
break;

default:
break;
}
}while(n!=4);
return 0;
}





























