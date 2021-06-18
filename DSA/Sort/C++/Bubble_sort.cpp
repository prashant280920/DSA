#include <bits/stdc++.h>
using namespace std;

// 1. Pseudo Code
// BUBBLE_SORT(A)
//     for i = n to 1:
//         k = n-1
//         for j=i t0 1:
//             if a[k] < a[k-1]:
//                 swap(a[k],a[k-1]);
//             k--

// 2. Time Complexity
// * Worst Case : {Big-O} O(n^2)
// * Best Case : {Omega} Ω(n)
// * Average Case : {Theta} θ(n^2)  

// 3. Space Complexity - O(n)

// 4. Key Point
// * It is Stable Sort
// * It is an Adaptive Sort
// * It is an Inplace Algorithm 
// * Bubble sort is slow
// * Bubble sort can be implemented recursively

void print(vector <int> &a);
void bubble_sort(vector <int> &a);

void bubble_sort(vector <int> &a){
    int vect_size = a.size();
    for(int i = vect_size; i>0; i--){
        int k = vect_size - 1;
        for (int j=i-1 ; j>0; j-- ){
            if (a[k]<a[k-1]){
                swap(a[k],a[k-1]);
            }
            k--;
        }
    }
}

void print(vector <int> &a){
    for(auto i: a)
        cout << i << " ";
}

int main(){

    int n,t;
    cout << "Enter Number of elements to sort:\n";
    cin >> n;
    vector <int> a;
    cout << "Enter elemets:\n";
    for(int i=0; i<n; i++){
        cin >> t;
        a.push_back(t);
    }

    bubble_sort(a);
    cout << "After Bubble Sort : ";
    print(a);
    cout << endl;
    return 0;
}