// { Driver Code Starts
//Initial Template for C++

// CPP code to find largest and 
// second largest element in the array

#include <bits/stdc++.h>
using namespace std;

vector<int> largestAndSecondLargest(int, int[]);


 // } Driver Code Ends


     

/* Function to find largest and second largest element
*sizeOfArray : number of elements in the array
* arr = input array
*/
vector<int> largestAndSecondLargest(int n, int a[]){
    
    /*********************************
     * Your code here
     * This function should return a
     * vector with first element as
     * max and second element as 
     * second max
     * *******************************/
     int f= a[0],s=INT_MIN,t=INT_MIN;
for(int i = 1;i<n;i++){
         if(a[i] > f){
             t = s;
             s = f;
             f= a[i];
         }
         else if(a[i] > s){
             t = s;
             if(a[i] == f){continue;}
             else s = a[i];
         }
         else if(a[i] > t){
             t = a[i];
         }
     }
     if(s < 0){s = -1;}
     vector<int> val;
     val.push_back(f);
     val.push_back(s);
     return val;
     
     
}

// { Driver Code Starts.

// Driver Code
int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    
	    vector<int> ans = largestAndSecondLargest(sizeOfArray, arr);
	    cout<<ans[0]<<' '<<ans[1]<<endl;
	}
	
	return 0;
}  // } Driver Code Ends