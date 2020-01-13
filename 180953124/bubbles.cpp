#include<iostream>

using namespace std;
int step =0;
void bubble(int a[],int n){
for(int i=0;i<n;i++){step++;
for(int j=i+1;j<n;j++){step++;
if(a[i]>a[j]){
int temp = a[i];step++;
a[i] = a[j];step++;
step++;
a[j] = temp;
}step++;
}
}
}


void selection(int a[], int n){
int smallest ,pos;step++;
int i;step++;

for(int pass = 0;pass<n;pass++){step++;
smallest = a[pass];step++;
pos = pass;step++;
for( i = pass+1;i<n;i++){step++;
if(a[i]< smallest){
pos = i;step++;
}step++;
}
step++;

if(pass!=pos){step++;
int temp = smallest;step++;
smallest= a[i];step++;
a[i]=temp;step++;
}step++;
}
}









int main(){
int a[] = {9,8,7,6,5}; step++;
bubble(a,5);step++;
for(int j=0;j<5;j++){
cout<<a[j];step++;
}
step++;

selection(a,5);step++;
for(int i=0;i<5;i++){
cout<<a[i]<<endl;step++;
}
step++;
step++;
step++;
cout<<"\n step count is:"<<step;


return 0;

}
