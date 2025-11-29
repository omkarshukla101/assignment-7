#include <iostream>
using namespace std;
void selectionSort(int a[], int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[minIndex]) minIndex=j;
        }
        int temp=a[i];
        a[i]=a[minIndex];
        a[minIndex]=temp;
    }
}
int main(){
    int a[]={5,2,8,4,1};
    int n=sizeof(a)/sizeof(a[0]);
    selectionSort(a,n);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
