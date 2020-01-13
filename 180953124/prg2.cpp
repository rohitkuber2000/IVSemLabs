#include<iostream>

using namespace std;

int main(){
int i,j;
int a[10];
int n;
cout<<"Enter number of elements in the array";
cin>>n;
cout<<"Enter the values";
for(i=0;i<n;i++){
cin>>a[i];
}
int key;

cout<<"Enter element to be searched";
cin>>key;

for(j=0;j<n;j++){
if(a[j]==key){
cout<<"Element found at:"<<j;
}
else{
cout<<"Element not found";
}
}
}
