#include<iostream>

using namespace std;


void insertion(int a[],int n){
int item;
int pass;
int j;
for(pass = 1;pass<n;pass++){
item = a[pass];
j = pass - 1;

while(j>=0&&item<a[j]){
a[j+1]=a[j];
j=j-1;
}
a[j+1] = item;
}
}

void recinsertion(int a[],int n){
  if(n<=1){return ;
          }
  
  recinsertion(a,n-1);
  int last = a[n-1];
  int j=n-2;
  
  while(j>=0&&a[j]>last){
    a[j+1] = a[j];
    j = j-1;
  }
  a[j+1] = last;
}

int main(){
int a[] = {9,8,7,6,5};

insertion(a,5);
for(int i=0;i<5;i++){
cout<<a[i]<<endl;
}

return 0;
}

