#include <bits/stdc++.h>
using namespace std;

// Pseudo Code
// INSERTION_SORT(A)
//     for i = 1 to n:
//         for j = i-1 ; j>=0; j--
//             if a[j] > a[j+1]
//                 swap( a[j], a[j+1])
//             else
//                 break

// Time Complexity
// Best Case Time Complexity : {Big-O} O(n)
// Worst Case Time Complexity : {Big-O} O(n^2)
// Average Time Complexity : {Theta} θ(n^2)  

// Key Point
// It is Stable Sort
// It is an Adaptive Sort


void insertion_sort(vector<int> &a){
    int vect_size = a.size();
    for(int i=1; i<vect_size; i++){
        for(int j=i-1; j>=0; j--){
            if (a[j]<=a[j+1]) 
                break;
            else
                swap(a[j],a[j+1]);
            
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
        cin>>t;
        a.push_back(t);
    }
    insertion_sort(a);
    cout << "After Insertion Sort : ";
    print(a);

    cout << endl;
    return 0;
}