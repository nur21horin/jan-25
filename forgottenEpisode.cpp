#include<iostream>
#include<algorithm>
using namespace std;

//MERGE SORT ALGORITHM


void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left >= right) return;
    
    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    //selection sort
    // for(int i=0;i<n-1;i++){
    //     int min=i;
    //     for(int j=i+1;j<n;j++){
    //         if(arr[j]<arr[min]){
    //             min=j;
    //         }
    //     }
    
    // if(i!=min){
    //     swap(arr[i],arr[min]);
    // }
    // }
    //insertion sort
    // for(int i=0;i<n-1;i++){
    //     int temp=arr[i];
    //     int j=i-1;
    //     while(j>=0 && arr[j]>temp){
    //         arr[j+1]=arr[j];
    //         j--;
    //     }
    //     arr[j+1]=temp;
    // }

    mergeSort(arr, 0, n-2);
    int missing=n;

    
    for(int i=0;i<n-1;i++){
        if(arr[i]!= i+1){
            missing=i+1;
        break;
        }
        
    }
    cout<<missing<<endl;
    return 0;
}