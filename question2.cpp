#include <iostream>
using namespace std;
void improvedSelectionSort(int a[], int n){
    int left=0, right=n-1;
    while(left<right){
        int minIndex=left, maxIndex=left;
        for(int i=left;i<=right;i++){
            if(a[i]<a[minIndex]) minIndex=i;
            if(a[i]>a[maxIndex]) maxIndex=i;
        }
        int t=a[left];
        a[left]=a[minIndex];
        a[minIndex]=t;
        if(maxIndex==left) maxIndex=minIndex;
        t=a[right];
        a[right]=a[maxIndex];
        a[maxIndex]=t;
        left++;
        right--;
    }
}
int main(){
    int a[]={5,2,8,4,1,7,3,6};
    int n=sizeof(a)/sizeof(a[0]);
    improvedSelectionSort(a,n);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
