//Expected Time Complexity: O(logn)

  
#include <bits/stdc++.h>
using namespace std;
  
// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binary(vector<int> arr, int l, int r, int x)
{
    if (r >= l) {
        int mid = l+r / 2;
  
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
  
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binary(arr, l, mid - 1, x);
  
        // Else the element can only be present
        // in right subarray
        return binary(arr, mid + 1, r, x);
    }
  
    
    return -1;
}

int binarySearch(vector<int> v, int x)
{
    
    
    int n = v.size();
    int result = binary(v, 0, n - 1, x);
    return result;
}

int main(){
    vector<int> v{1,3,5,8,9};
    int x = 5;
 
    cout<<binarySearch(v,x);

    
}