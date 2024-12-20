//Question
// Given an array arr[]. Push all the zeros of the given array to the right end of the array while maintaining the order of non-zero elements. Do the mentioned change in the array in place.

// Examples:

// Input: arr[] = [1, 2, 0, 4, 3, 0, 5, 0]
// Output: [1, 2, 4, 3, 5, 0, 0, 0]
// Explanation: There are three 0s that are moved to the end.
// Input: arr[] = [10, 20, 30]
// Output: [10, 20, 30]
// Explanation: No change in array as there are no 0s.
// Input: arr[] = [0, 0]
// Output: [0, 0]
// Explanation: No change in array as there are all 0s.
// Constraints:
// 1 ≤ arr.size() ≤ 105
// 0 ≤ arr[i] ≤ 105

                                       //Solution
//Brute force solution.
//IDEA: Pick up all the non-zero elements and store it somewhere (temp. array). Then take everything from the temp array and place it in the array...the last step
//will be to fill up the 0s at the back.
//T.C: O(N)+O(x)+O(N-x)=O(2N)
//S.C:O(x) which at max in worst case can be O(N).

//code:
vector<int> moveZeroes(int,vector<int> a){
//step-1
vector<int> temp;
for(int i=0;i<n;i++){
if(a[i] != 0){
  temp.push_back(a[i]);
  }
}
//step-2
int nz=temp.size();
for(int i=0;i<nz;i++){
a[i]=temp[i];
}
//step-3
for(int i=nz;i<n;i++){
a[i]=0;
}
return a;
}

//There is no better solution.

//Optimal solution:
     class Solution {
  public:
    vector<int> pushZerosToEnd(vector<int>& arr) {
        // code here
        //step-1.finding first zeroth element.
       int j=-1;
       for(int i=0;i<arr.size();i++){
           if(arr[i]==0){
               j=i;
               break;
           }
       }

  //no non zero elements
       if(j==-1) {
       return arr;
       }
       
       for(int i=j+1;i<arr.size();i++){
           if(arr[i]!=0){
               swap(arr[i],arr[j]);
               j++;
           }
       }
       return arr;
    }
};
