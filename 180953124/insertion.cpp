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

int main(){
int a[] = {9,8,7,6,5};

insertion(a,5);
for(int i=0;i<5;i++){
cout<<a[i]<<endl;
}

return 0;
}

