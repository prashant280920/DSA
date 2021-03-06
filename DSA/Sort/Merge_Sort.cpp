
#include <iostream>
using namespace std;

// 1. Pseudo Code:
//  MergeSort(arr[], l,  r)
//  If r > l
//       1. Find the middle point to divide the array into two halves:  
//               middle m = l+ (r-l)/2
//       2. Call mergeSort for first half:   
//               Call mergeSort(arr, l, m)
//       3. Call mergeSort for second half:
//               Call mergeSort(arr, m+1, r)
//       4. Merge the two halves sorted in step 2 and 3:
//               Call merge(arr, l, m, r)

// 2. Time Complexity
//   * Best Case - <b>O(nlogn)</b>
//   * Average Case - <b>O(nlogn)</b>
//   * Worst Case - <b>O(nlogn)</b>

// 3. Space Complexity - <b>O(n)</b>

// 4. Key Point
//   * Divide and Conquer algorithm.
//   * Merge Sort is useful for sorting linked lists.
//   * It is a <b>stable sort</b> 
//   * It is <b>not an adaptive sort</b>



void merge(int arr[], int l, int m, int r){
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1]; int R[n2];
    for (int i =0; i<n1; i++){
        L[i] = arr[l + i];
    }
    for (int i=0; i<n2; i++){
        R[i] = arr[m + 1 +i];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while (i<n1 and j<n2){
        if (L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = R[j];
        j++;
        k++;
    }

}
void mergeSort(int arr[], int l, int r){
    if (l>=r){
        return;
    }
    else{
        int m;
        m = l + (r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr, l, m, r);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    mergeSort(arr, 0, n-1);
    for (int i=0; i<n; i++){
        cout << arr[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}


