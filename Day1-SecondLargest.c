//QUESTION:
// Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.

// Note: The second largest element should not be equal to the largest element.

// Examples:

// Input: arr[] = [12, 35, 1, 10, 34, 1]
// Output: 34
// Explanation: The largest element of the array is 35 and the second largest element is 34.
// Input: arr[] = [10, 5, 10]
// Output: 5
// Explanation: The largest element of the array is 10 and the second largest element is 5.
// Input: arr[] = [10, 10, 10]
// Output: -1
// Explanation: The largest element of the array is 10 and the second largest element does not exist.
// Constraints:
// 2 ≤ arr.size() ≤ 105
// 1 ≤ arr[i] ≤ 105
                                                           

                                                                        //Solution.
//This question has :
                  //1.Brute force approach
                  //2.Better approach
                  //3.Optimal solution

//1.Brute force approach:
//In this solution we will first sort the array(O(nlogn)) , then after sorting we surely know that largest element will be =arr[n-1],
     //but for second largest we again have to run a for loop(O(n)).
//   for(i=n-2;i>=0;i--){
//  if (arr[i] !=largest)
//    secondLargest=arr[i];
//  break;
//       }

//T.C: (nlogn+n)   
//S.C: O(1)

//2.Better approach:
//In this method we will use first pass and second pass.
//First pass: we will get the largest element. O(n)
//    largest=arr[0]
//    for(i=0;i<n;i++)
//        { if (arr[i]>largest) 
//     largest=arr[i];
//                 }
//Second pass: we will check secondlargest>-1 and not equal to largest , and get the second largest element. O(n)
//    secondLargest=-1;
//    for(i=0;i<=n;i++){
//       if(arr[i]>secondLargest && arr[i] 1=largest)
//        secondLargest=arr[i]
//     }
//     print secondLargest
//T.C:O(n+n)=O(2n)
//S.C:O(1)

//3.Optimal solution:
//using single iteration and updating value of largest and second largest.
//assume largest=arr[0] and secondLargest=-1 (assuming array contains positive numbers, if array contains negative numbers use INT_MIN)
//T.C: O(n)
//S.C:O(1)

class Solution {
  public:
    // Function returns the second
    // largest elements
    
    int secondLargest(vector<int>&arr){
        int largest=arr[0];
        int sLargest=-1;
        for(int i=1;i<arr.size();i++){
          if(arr[i]>largest){
              sLargest=largest;
              largest=arr[i];
          }
          
          else if(arr[i]<largest&& arr[i]>sLargest){
              sLargest = arr[i];
          }
        } 
        return sLargest;
    }
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int sLargest = secondLargest(arr);
    
        return(sLargest);
        }
};

