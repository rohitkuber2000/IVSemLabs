#include<iostream>
using namespace std;

void binarys(int a[], int l, int h, int k){
int mid = (l + h)/2;
if(a[mid] == k){
cout<<"Element found at"<<mid+1;
return ;
}

if(a[mid]>k){
return binarys(a,l,mid-1,k);
}
else{
return binarys(a,mid+1,h,k);
} 

}

int main(){

int a[] = {3,4,6,7,10};

binarys(a,0,4,3);
return 0;
}
