#include <iostream>
using namespace std;
int partitionArr(int a[], int low, int high){
    int pivot=a[high];
    int i=low-1;
    for(int j=low;j<high;j++){
        if(a[j]<pivot){
            i++;
            int t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    int t=a[i+1];
    a[i+1]=a[high];
    a[high]=t;
    return i+1;
}
void quickSort(int a[], int low, int high){
    if(low<high){
        int pi=partitionArr(a,low,high);
        quickSort(a,low,pi-1);
        quickSort(a,pi+1,high);
    }
}
int main(){
    int a[]={5,2,8,4,1};
    int n=sizeof(a)/sizeof(a[0]);
    quickSort(a,0,n-1);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
