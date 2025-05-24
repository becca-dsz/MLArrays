// Given an integer array arr[] of size n elements and a positive integer K, the task is to return the kth largest element in the given array (not the Kth distinct element)

#include <bits/stdc++.h>
using namespace std;

// Function to return kth largest element
int kthlargest(vector<int>&arr, int k) {

    // Sort the array in descending order
    sort(arr.begin(), arr.end(), greater<int>());

    // Return kth largest element
    return arr[k-1];
}

int main() {
    vector<int> arr = {12,3,5,7,19};
    int k = 2;
    cout << kthlargest(arr,k);
    return 0;
}
