
#include<iostream>
using namespace std;

class sll{
int data;
sll* next;

public:

void insertend(int d,sll* first );
void insertbeg(int d,sll* first);
void insertat(int n,int d,sll* first);
void delEnd(sll* first);
void delStart(sll* first);
void delAt(sll* first);
void display(sll* first);
void sort(sll* first);
void delend(sll* first);
void del_front(sll* first);
};
sll* head = NULL;
void sll::insertend(int d,sll* first){
    sll* temp = new sll;
    temp->data = d;
    temp->next = NULL;
    
    if(first == NULL){
        head= temp;
    }
    else{
        sll* i = NULL;
        for(i = first;i->next!=NULL;i=i->next);
        i->next = temp;
    }
    
}

void sll::insertbeg(int d , sll *first){
    sll* temp = new sll;
    temp->data = d;
    temp->next = NULL;
    
    if(first==NULL){
        head = temp;
    }
    else{
        temp->next = head;
        head = temp;
    }
}


void  sll::insertat(int n,int d,sll* first){
    sll* temp = new sll;
    temp->data = d;
    temp->next = NULL;
    int count = 0; int i=1;
    sll* j;
    for(sll* k = first;k!=NULL;k=k->next){
        count++;
    }
    if(n==1&&count==0){
        head = temp;
    }
    else if(n<count){
        for(j= first;i<n;j=j->next,i++);
        temp->next = j->next;
        j->next = temp;
    }
}


void sll::del_front(sll* first)
{
if(head==NULL)
cout<<"\nlist is empty";
else
{
sll *temp=head;
head =  head->next;
delete temp;
}


}
void sll::delend(sll* first)
{
if(head==NULL)
cout<<"\nlist is empty";
else if(head->next==NULL)
{
sll *temp=head;
head=NULL;
delete temp;
}
else
{
sll  *prev,*curr;
    for(curr=head;curr->next!=NULL;curr=curr->next);
prev=curr;
prev->next=NULL;
delete curr;
}
}

void sll::display(sll* first){
    if(first==NULL){
        cout<<"List is empty";
    }
    else{
        sll* i =first;
        while(i!=NULL){
            cout<<i->data<<endl;
            i = i->next;
        }
    }
    
}


int main(){
    sll l ; int n = 5;
    int x;
    cout<<"Enter elements";
    for(int i=0;i<n;i++){
        cin>>x;
        l.insertend(x, head);
    }
//    int e,p;
//    cout<<"Enter element and position to enter:"<<endl;
//    cin>>e>>p;
//    l.insertat(p, e, head);
    l.delend(head);
    l.display(head);
    return 0;
}

