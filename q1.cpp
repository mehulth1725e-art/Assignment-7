#include <iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int si=i ;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[si]){
                si=j;
            }
      
            int temp=arr[i];
            arr[i]=arr[si];
            arr[si]=temp;

        }
    }

}
void printarr(int arr[],int n){
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
  int arr[5] = {5, 3, 2, 4, 1};
    int n = 5;
    selectionsort(arr,n);
    printarr(arr,n);

    return 0;
}
