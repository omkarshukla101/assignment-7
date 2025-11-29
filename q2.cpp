#include <iostream>
using namespace std;
void insertionSort(int a[], int n){
    for(int i=1;i<n;i++){
        int key=a[i], j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}
int main(){
    int a[]={5,2,8,4,1};
    int n=sizeof(a)/sizeof(a[0]);
    insertionSort(a,n);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
