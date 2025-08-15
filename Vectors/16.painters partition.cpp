#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Function to check if all boards can be painted by 'k' painters such that no painter paints more than 'maxAllowedTime' units

bool isPossible(vector<int> &arr, int n, int k, int maxAllowedTime){
    int painters = 1;    // Start with first painter
    int time = 0;        // Current total time allocated to current painter

    for(int i = 0; i < n; i++){
        // If a single board exceeds maxAllowedTime, allocation is impossible
        if(arr[i] > maxAllowedTime) return false;

        // If adding current board doesn't exceed maxAllowedTime
        if(time + arr[i] <= maxAllowedTime){
            time += arr[i];  // Assign board to current painter
        }
        else{
            // Otherwise, allocate to next painter
            painters++;
            time = arr[i];   // Start counting time for new painter
        }
    }

    // If total painters used <= available painters, allocation is possible
    return painters <= k;
}


// Function to find minimum time required to paint all boards by k painters
int minTimeToPaint(vector<int> &arr, int n, int k){
    int sum = 0;               // Sum of all board lengths (max possible time)
    int maxValue = INT_MIN;    // Largest single board length

    if(k > n) return -1;       // Not enough boards for each painter

    // Calculate sum and maxValue for binary search range
    for(int i = 0; i < n; i++){
        sum += arr[i];
        maxValue = max(maxValue, arr[i]);
    }

    int st = maxValue;  // Minimum possible time (at least largest board)
    int end = sum;      // Maximum possible time (all boards by one painter)
    int ans = -1;       // Store answer

    // Binary search to find minimum possible maximum time
    while(st <= end){
        int mid = st + (end - st) / 2;

        if(isPossible(arr, n, k, mid)){
            ans = mid;        // Mid is a valid solution
            end = mid - 1;    // Try to find smaller maximum time
        }
        else{
            st = mid + 1;     // Mid too small, increase lower bound
        }
    }

    return ans; // Minimum time needed
}


int main(){
    vector<int> arr = {40,30,10,20}; // Boards with lengths
    int k = 2;                        // Number of painters
    int n = arr.size();               // Number of boards

    int result = minTimeToPaint(arr, n, k);
    cout <<"Minimum time to paint : "<<result << endl;           // Output minimum time

    return 0;
}

// output

// Minimum time to paint : 60

