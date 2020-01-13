#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class sll{
public:
char Name[20];
int Age;
char Department[20];
int Salary;
sll* next;
void insertq(sll* head,char n[],int ag,char dep[],int sal );
//void  sortl(sll** head);
//void displayl(sll* head);
};

sll* head = NULL;

void  sll::insertq(sll* first,char n[],int ag,char dep[],int sal ){
sll* temp = new sll();
strcpy(temp->Name,n);
temp->Age = ag;  
strcpy(temp->Department,dep);
temp-> Salary = sal;
temp->next = NULL;


if(first == NULL){
head = temp;}
else{
sll *i = first;
while(i->next!=NULL){
i=i->next;
}

i->next = temp;


}
}



int main(){
int n;
char na[20],dep[20];
cout<<"Enter number of records";
cin>>n;
int sal,ag;
sll s;
sll* sl;
for(int i= 0;i<n;i++){
cout<<"Enter employee"<<i+1<<"name:";
cin>>na;
cout<<"\n Enter employee"<<i+1<<"age:";
cin>>ag;
cout<<"\n Enter employee"<<i+1<<"Department:";
cin>>dep;
cout<<"\n Enter employee"<<i+1<<"Salary:";
cin>>sal;
s.insertq(head,na,ag,dep,sal);
}

return 0;
}
