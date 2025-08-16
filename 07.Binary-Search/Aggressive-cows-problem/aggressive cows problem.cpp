#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
   Function: isPossible
   --------------------
   Checks if it is possible to place C cows in the stalls
   such that the minimum distance between any two cows
   is at least 'maxAllowedDist'.

   Parameters:
       arr - vector of stall positions (sorted)
       N   - number of stalls
       C   - number of cows
       maxAllowedDist - the minimum distance we are trying to test

   Returns:
       true  -> if we can place all C cows successfully
       false -> otherwise
*/
bool isPossible(vector<int> &arr, int N, int C, int maxAllowedDist) {
    int cows = 1;               // Place first cow in the first stall
    int lastStallPos = arr[0];  // Position of the last stall where we placed a cow

    // Try to place remaining cows
    for (int i = 1; i < N; i++) {
        // Check if the current stall is far enough from the last placed cow
        if (arr[i] - lastStallPos >= maxAllowedDist) {
            cows++;                 // Place a cow here
            lastStallPos = arr[i];  // Update last cow's position
        }
        // If all cows are placed, return true
        if (cows == C) return true;
    }

    // If loop ends and not all cows placed → return false
    return false;
}

/*
   Function: getDistance
   ---------------------
   Uses Binary Search to find the maximum possible
   minimum distance between cows.

   Steps:
     1. Sort the stall positions.
     2. Set the search range for distance:
          st  = 1 (minimum possible distance between cows)
          end = arr[N-1] - arr[0] (maximum possible distance)
     3. Perform binary search:
          - mid = (st + end) / 2
          - Check if placing cows with distance 'mid' is possible.
            -> If YES, store answer and try bigger distance.
            -> If NO, reduce search range and try smaller distance.
*/
int getDistance(vector<int> &arr, int N, int C) {
    sort(arr.begin(), arr.end());   // Sort stall positions

    int st = 1;                     // smallest possible min distance
    int end = arr[N - 1] - arr[0];  // largest possible min distance
    int ans = -1;                   // will store the result

    while (st <= end) {
        int mid = st + (end - st) / 2;  // mid = candidate minimum distance

        if (isPossible(arr, N, C, mid)) {
            ans = mid;          // mid is possible → save it
            st = mid + 1;       // try for a bigger distance
        } else {
            end = mid - 1;      // mid not possible → try smaller distance
        }
    }
    return ans;  // largest minimum distance found
}

/*
   Main function:
   --------------
   Example input: stalls = {1, 2, 8, 4, 9}, C = 3 cows
   Output: Largest minimum distance between cows
*/
int main() {
    vector<int> arr = {1, 2, 8, 4, 9};  // stall positions
    int N = arr.size();                 // number of stalls
    int C = 3;                          // number of cows

    cout << "Largest minimum distance : " << getDistance(arr, N, C) << endl;
    return 0;
}

// output

// Largest minimum distance : 3
