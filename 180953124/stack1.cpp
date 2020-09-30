#include<iostream>

using namespace std;
const int maxsize = 10;
class stack{
public:
stack(){ top = -1;}
void push(int i);
int pop();
void display();
private:
int a[10];
int item;
int top;
};

void stack:: push(int i){

if(top==maxsize - 1){
cout<<"stack is full";
}

else{
top++;
a[top] = i;
}

}

int stack:: pop(){

if(top==-1){
cout<<"Stack is Empty";
}

else{
int e = a[top];
top--;
return e;
}
}

void stack:: display(){

if(top==-1){
cout<<"Stack is empty";
}
else{
for(int i=top;i>=0;i--){
cout<<a[i]<<"\t";
}
}
}

int main(){

stack s;

int n;
cout<<"Enter the Elements";
do{
cout<<"\nPress 1. To Insert in Stack \n Press 2. To pop in stack \n Press 3. To Display stack contents\n Press 4. To Exit";
cin>>n;

switch(n){

case 1:
int ele;
cout<<"Enter the element:";
cin>>ele;
s.push(ele);
break;

case 2:
int p;
p = s.pop();
cout<<"The popped element is:"<<p<<endl;
break;
case 3:
cout<<"The stack contents are:";
s.display();
break;
case 4:
break;

default:
break;
}
}while(n!=4);
return 0;

}










