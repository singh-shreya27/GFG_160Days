// Given an unsorted array arr[]. Rotate the array to the left (counter-clockwise direction) by d steps, where d is a positive integer. Do the mentioned change in the array in place.

// Note: Consider the array as circular.

// Examples :

// Input: arr[] = [1, 2, 3, 4, 5], d = 2
// Output: [3, 4, 5, 1, 2]
// Explanation: when rotated by 2 elements, it becomes 3 4 5 1 2.
// Input: arr[] = [2, 4, 6, 8, 10, 12, 14, 16, 18, 20], d = 3
// Output: [8, 10, 12, 14, 16, 18, 20, 2, 4, 6]
// Explanation: when rotated by 3 elements, it becomes 8 10 12 14 16 18 20 2 4 6.
// Input: arr[] = [7, 3, 9, 1], d = 9
// Output: [3, 9, 1, 7]
// Explanation: when we rotate 9 times, we'll get 3 9 1 7 as resultant array.
// Constraints:
// 1 <= arr.size(), d <= 105
// 0 <= arr[i] <= 105

                                        //solution
//left rotate the array by one place:
vector<int> rotateArray(vector<int> &arr,int n)
int temp=arr[0];
for(int i=1;i<n;i++){
    arr[i-1]=arr[i];
}
arr[n-1]=temp;
return arr;
}
//T.C:O(N)
//S.C:O(1)

//left rotate the array by d places.
    //Brute force approach.
//firstly, we will make a temp array and store the first d elements.
//then we will do shifting from dth index..and lastly, we will put back the elements at last.
      //code
void leftRotate(int arr[],int n, int d){
d=d%n;
//stored in temp
int temp[d];
for(int i=0;i<d;i++){             //O(d)
temp[i]=arr[i];
}
//shifted
for(int i=d;i<n;i++){                     //O(n-d)
arr[i-d]=arr[i];
}
//placed back temp into array.
for(int i=n-d;i<n;i++){
arr[i]=temp[i-(n-d)];               //O(d)
    }
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
int d;
cin>>d;
leftRotate(arr,n,d);
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
return 0;
}

//T.C:O(n+d)
//S.C:O(d)


//better solution might not exist.
//but we have to get rid of the extra space.
//optimal solution

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
// Function to rotate vector

void rotateArr(vector<int>& arr, int d) {
    int n = arr.size();
  
    // Handle the case where d > size of array
    d %= n;
  
    // Reverse the first d elements
    reverse(arr.begin(), arr.begin() + d);

    // Reverse the remaining n-d elements
    reverse(arr.begin() + d, arr.end());
  
    // Reverse the entire array
    reverse(arr.begin(), arr.end());
}

};
 
    
