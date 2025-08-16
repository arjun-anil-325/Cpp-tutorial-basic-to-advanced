#include <iostream>
#include <vector>
#include <climits>
using namespace std;

/*
   Function: isPossible
   --------------------
   Checks if it is possible to paint all boards using 'k' painters such that
   no painter paints more than 'maxAllowedTime' units.

   Parameters:
       arr            - vector containing lengths of boards
       n              - number of boards
       k              - number of painters
       maxAllowedTime - maximum time we are testing for feasibility

   Returns:
       true  -> if allocation is possible
       false -> otherwise
*/
bool isPossible(vector<int> &arr, int n, int k, int maxAllowedTime) {
    int painters = 1; // current number of painters used
    int time = 0;     // current total time for this painter

    for (int i = 0; i < n; i++) {
        // If a single board is larger than maxAllowedTime → impossible
        if (arr[i] > maxAllowedTime) return false;

        // If current painter can take this board without exceeding limit
        if (time + arr[i] <= maxAllowedTime) {
            time += arr[i];
        } 
        else {
            // Otherwise, give this board to next painter
            painters++;
            time = arr[i]; // reset time for new painter
        }
    }

    // If required painters <= available painters, allocation works
    return painters <= k;
}

/*
   Function: minTimeToPaint
   ------------------------
   Finds the minimum possible maximum time to paint all boards
   by k painters under these conditions:
     1. Each painter paints a contiguous sequence of boards.
     2. Boards cannot be split between painters.
     3. We minimize the maximum time taken by any painter.

   Approach:
     - Use Binary Search on Answer.
     - Lower bound = max(board length)  (at least one painter must handle the biggest board).
     - Upper bound = sum(all boards)   (one painter paints everything).
     - Check feasibility for mid using isPossible().
*/
int minTimeToPaint(vector<int> &arr, int n, int k) {
    int sum = 0;            // total length of boards
    int maxValue = INT_MIN; // longest single board

    if (k > n) return -1;   // not enough boards for painters

    // Calculate sum and maximum board length
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        maxValue = max(maxValue, arr[i]);
    }

    int st = maxValue; // minimum possible answer
    int end = sum;     // maximum possible answer
    int ans = -1;      // stores final answer

    // Binary Search
    while (st <= end) {
        int mid = st + (end - st) / 2; // candidate max time

        if (isPossible(arr, n, k, mid)) {
            ans = mid;       // valid solution
            end = mid - 1;   // try to minimize further
        } 
        else {
            st = mid + 1;    // too small, increase time
        }
    }

    return ans;
}

/*
   Main function:
   --------------
   Example:
     Boards = {40, 30, 10, 20}, k = 2 painters
   Expected Output: 60

   Explanation:
     - Painter 1 → {40, 20} = 60
     - Painter 2 → {30, 10} = 40
     Max = 60 (minimized)
*/
int main() {
    vector<int> arr = {40, 30, 10, 20}; // board lengths
    int k = 2;                          // number of painters
    int n = arr.size();                 // number of boards

    int result = minTimeToPaint(arr, n, k);
    cout << "Minimum time to paint : " << result << endl;

    return 0;
}


// output

// Minimum time to paint : 60

