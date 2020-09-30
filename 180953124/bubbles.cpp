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
void bubbleSort(int arr[], int n) 
{ 
    // Base case 
    if (n == 1) 
        return; 
  
    // One pass of bubble sort. After 
    // this pass, the largest element 
    // is moved (or bubbled) to end. 
    for (int i=0; i<n-1; i++) 
        if (arr[i] > arr[i+1]) 
            swap(arr[i], arr[i+1]); 
  
    // Largest element is fixed, 
    // recur for remaining array 
    bubbleSort(arr, n-1); 
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
int minIndex(int a[], int i, int j) 
{ 
    if (i == j) 
        return i; 
  
    // Find minimum of remaining elements 
    int k = minIndex(a, i + 1, j); 
  
    // Return minimum of current and remaining. 
    return (a[i] < a[k])? i : k; 
} 
  
// Recursive selection sort. n is size of a[] and index 
// is index of starting element. 
void recurSelectionSort(int a[], int n, int index = 0) 
{ 
    // Return when starting and size are same 
    if (index == n) 
       return; 
  
    // calling minimum index function for minimum index 
    int k = minIndex(a, index, n-1); 
  
    // Swapping when index nd minimum index are not same 
    if (k != index) 
       swap(a[k], a[index]); 
  
    // Recursively calling selection sort function 
    recurSelectionSort(a, n, index + 1); 
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
